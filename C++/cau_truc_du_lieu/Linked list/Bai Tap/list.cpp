/*thêm vào 1 phần tử vào đầu  (dùng danh sách liên kết)
-------
t là số test
nhập lần lượt các phần tử (nếu không nhập số thì in ra kết quả và chuyển sang lần test tiếp theo)
mỗi lần nhập, chỉ nhập vào đầu
ví dụ: 3 2 1, khi nhập a = 4 thì dãy mới 4 3 2 1
-------
input:
3
2 3 2 1
3 2 1 4
2 1 2 1
--> output:
1 2 3 2
4 1 2 3
1 2 1 2   */
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int data){this->data = data; this->next = NULL;}// hàm khởi tạo có data
};
class LinkerList{
    private:
        Node *head;
    public:
        LinkerList(){head = NULL;}// hàm khởi tạo mặc định
        void addFront(int val);// thêm giá trị vào đầu dslk
        string toString();
};
void LinkerList::addFront(int val){
    Node *node = new Node(val);
    if(head==NULL){
        head = node;
        head->next = NULL;
    }
    else{
        Node *temp = head;
        head = node;
        head->next = temp;
    }
};
string LinkerList::toString(){
    ostringstream ss;
    Node *temp = head;
    while(temp!=NULL){
        ss<<temp->data<<" ";
        temp = temp->next;
    }
    return ss.str();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        LinkerList list;
        int val;
        while(cin>>val){
            list.addFront(val);
            cout<<list.toString();
            cout<<endl;
        }
        cin.clear();
        cin.ignore();
        cout<<"------------"<<endl;
    }
    return 0;
}