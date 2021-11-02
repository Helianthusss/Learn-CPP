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
        void BFS (int u);//thuật toán BFS dựa vào hàng đợi
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
void Graph::BFS(int u){//thuật toán BFS
    list<int> queue; //tạo hàng đợi rỗng
    queue.push_back(u);//đưa u vào hàng đợi
    chuaxet[u] = false; //ghi nhận đỉnh u đã xét
    list<int>::iterator t; //sử dụng t là một iterator
    while(!queue.empty()){//lặp đến khi hàng đợi rỗng
        int s = queue.front();//lấy s ở đầu hàng đợi
        cout << s << " ";//thăm đỉnh s
        queue.pop_front();//loại s ra khỏi hàng đợi
        for(t = adj[s].begin(); t != adj[s].end(); ++t){ //duyệt các đỉnh t thuộc list(s)
            if(chuaxet[*t]){ //nếu đỉnh t chưa xét
                queue.push_back(*t); //đưa t vào hàng đợi
                chuaxet[*t] = false; //xác nhận t đã xét
            }
        }
    }
}
int main(void){
    ifstream fp("dothi.in"); int n, m, dau, cuoi;
    fp>>n>>m;//đọc số đỉnh và số cạnh của đồ thị
    Graph gh(n+1);//khởi tạo đồ thị với V=1, 2, ..,n
    for(int i=1; i<=m; i++){//chuyển đồ thị thành biểu diễn danh sách kề
        fp>>dau>>cuoi; //đọc một cạnh
        gh.addEdge(dau, cuoi);//thêm cạnh vào đồ thị
    }
    fp.close();
    cout<<"\n Kết quả duyệt:"; gh.BFS (5);
}
