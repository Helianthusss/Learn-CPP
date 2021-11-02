#include <iostream>
#include <list>
#include <fstream>
#include <iomanip>
#include <stack>
using namespace std;
class Graph{//định nghĩa lớp Graph
    private:
        int V; // số đỉnh của đồ thị
        list <int> *adj; // con trỏ đến mảng các danh sách kề adj
        bool *chuaxet; //mảng ghi nhận các đỉnh cưa xét
    public:
        Graph(int V); // constructor của lớp
        void addEdge(int v, int w); // thêm cạnh (u, w) vào đồ thị
        void printGraph();//in biểu diễn danh sách kề
        void DFS(int u);//thuật toán DFS đệ qui
};
Graph::Graph(int V){ //constructor của lớp
    this->V = V;//thiết lập V=0, 1, 2, .., V-1
    adj = new list<int>[V];//thiết lập V danh sách kề
    chuaxet = new bool[V];//thiết lập trạng thái các đỉnh đều chưa xét
    for(int u=0; u<V; u++) //duyệt trên tập đỉnh V
        chuaxet[u]=true; //thiết lập tất cả các đỉnh đều chưa xét
}
void Graph::addEdge(int v, int w){//thêm cạnh (v,w) vào đồ thị
    adj[v].push_back(w); //thêm w vào list(v) nếu là đồ thị có hướng
    adj[w].push_back(v); //thêm v vào list(w) nếu là đồ thị vô hướng
}
void Graph::DFS(int u){ //thuật toán duyệt theo chiều sâu
    cout << u <<setw(3); //thăm đỉnh u
    chuaxet[u] = false; //ghi nhận đỉnh u đã xét
    list <int> ::iterator v;//lấy v là iterator
    for (v = adj[u].begin(); v != adj[u].end(); ++v){ //duyệt các đỉnh adj[v]
        if (chuaxet[*v]) //nếu v đúng là chưa được xét
        DFS(*v); //duyệt theo chiều sâu bắt đầu từ v
    }
}
void Graph::printGraph(){
    list<int>::iterator v;
    cout<<"\n Số đỉnh đồ thị:"<<V-1;
    for (int u = 1; u < V; ++u){
        printf("\n List(%d):",u);
        for(v=adj[u].begin(); v != adj[u].end(); ++v)
            cout<<"-> "<<*v;
        cout<<endl;
    }
}
int main(void){
    ifstream fp("dothi.in");
    int n, m, dau, cuoi;
    fp>>n>>m;//đọc số đỉnh và số cạnh của đồ thị
    Graph gh(n+1);//khởi tạo đồ thị với V=1, 2, ..,n
    for(int i=1; i<=m; i++){//chuyển đồ thị thành biểu diễn danh sách kề
        fp>>dau>>cuoi; //đọc một cạnh
        gh.addEdge(dau, cuoi);//thêm cạnh vào đồ thị
    }
    fp.close();
    gh.printGraph(); //in biểu diễn danh sách kề của đồ thị
    cout<<"\n Kết quả duyệt:";
    gh.DFS (5);
}
