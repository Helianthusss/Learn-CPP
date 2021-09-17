#include<bits/stdc++.h>
using namespace std;

template <class Item>
class ArrayList{
    public:
        static const int MAX_SIZE = 100; 
        ArrayList();
        bool isEmpty() const;
        int length() const;
        void insert(const int x, int i);
        void append(const int x);
        void remove(int i);
        int* retrieve(int i) const;
        void print() const;
    private:
        Item element[MAX_SIZE];
        int current; // current la chi so dau
        int last; // last la chi so cuoi
};
ArrayList::ArrayList(){
    last = -1;
}
bool ArrayList::isEmpty() const{
    return (last == -1);
}
int ArrayList::length() const{
    return last +1; 
}
void ArrayList::insert(const int x, int i){
    cin >> x;

}
void ArrayList::append(const int x){
    if(last +1 == MAX_SIZE) {
        cout << "the list is full\n";
        exit(0);
    }
    element[last +1] = x;
    last ++;   
}
void ArrayList::print(){
    for(int i=0;i<=last;i++){
        cout<<element[i]<<" ";
    }
}
int main(){
    ArrayList list;
    if(list.isEmpty()) cout << "Empty List";
    else cout<<" Not empty list";
    return 0;
}
