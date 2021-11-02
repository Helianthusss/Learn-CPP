#include<iostream>
#include <list>
#include <fstream>
#include <iomanip>
#include <stack>
using namespace std;
class Graph{ //định nghĩa lớp Graph
    private:
        int V; // tập đỉnh của đồ thị
        list <int> *adj; // con trỏ đến mảng các danh sách kề
    public:
        Graph(int V); // constructor của lớp
        void addEdge(int v, int w); // thêm một cạnh của đồ thị vào danh sách kề
        int NegativeDeg(int u); //tìm bán đỉnh bậc vào của đỉnh u
        bool CheckEuler(void);//thuật toán Hình 5.11
        void EulerCycle(int u); //thuật toán Hình 5.10
};
Graph::Graph(int V){//Constructor: khởi tạo đồ thị ban đầu
    this->V = V;//thiết lập tập đỉnh
    adj = new list<int>[V];//thiết lập V danh sách kề
}
void Graph::addEdge(int v, int w){
    adj[v].push_back(w); //thêm đỉnh w vào danh sách kề đỉnh v.
}
int Graph::NegativeDeg(int u){
    int dem =0; list <int>::iterator v;
    for(int s=1; s<V; s++){
        for(v=adj[s].begin(); v != adj[s].end(); ++v){
            if(u==(*v)) dem++;
        }
    }
    return dem;
}
bool Graph::CheckEuler(){ //thuật toán kiểm tra đồ thị Euler
    for(int u=1; u<V; u++){ //duyệt u trên tập đỉnh V
        int deg_u = adj[u].size(); //lấy bán bậc ra của đỉnh u
        int deg_u1 = Negative_Deg(); //lấy bán bậc vào của đỉnh u
        if (deg_u%2!=deg_u1) //nếu u có bán bậc ra khác bán bậc vào
            return false;//đồ thị không phải Euler
    }
    return true;//đồ thị là Euler
}
void Graph::EulerCycle(int u){//tìm chu trình Euler bắt đầu tại đỉnh u
    //Bước 1 (Khởi tạo):
    stack <int> stack; //tạo stack rỗng
    int *CE = new int[V], k=0;//tạo mảng CE rỗng
    stack.push(u); //đưa u vào ngăn xếp
    //Bước 2 (Lặp):
    while(!stack.empty()){//lặp đến khi stack rỗng
        int s = stack.top(); //lấy s là đỉnh đầu ngăn xếp
        if(!adj[s].empty()){ //nếu ke(s) khác rỗng
            int t= adj[s].front();//t là đỉnh đầu tiên trong ke(s)
            stack.push(t);//đưa t vào ngăn xếp
            adj[s].remove(t);//loại t khỏi ke(s)
            adj[t].remove(s); //loại s khỏi ke(t)
        }
        else {//nếu ke(s) là rỗng
            stack.pop();//loại s khỏi stack
            CE[k]= s; k++;//đưa s sang CE
        }
    }
    //Bước 3 (Trả lại kết quả):
    cout<<"\n Kết quả:";
    for(int t=k-1;t>=0; t--){//lật ngược lại CE
        cout<<EC[t]<<"-";
    }
    cout<<endl;
}
int main(void){
    ifstream fp("dothi.in");
    int n, m, dau, cuoi;
    fp>>n>>m;//đọc số đỉnh và số cạnh của đồ thị
    Graph gh(n+1);//thiết lập đồ thị n đỉnh V=1, 2, .., n
    for(int i=1; i<=m; i++){//chuyển biểu diễn đồ thị thành danh sách kề
        fp>>dau>>cuoi;
        gh.addEdge(dau, cuoi);
    }
    fp.close();
    if(gh.CheckEuler()){ //nếu đồ thị là Euler
        gh.EulerCycle(3);//đưa ra một chu trình Euler
    }
}