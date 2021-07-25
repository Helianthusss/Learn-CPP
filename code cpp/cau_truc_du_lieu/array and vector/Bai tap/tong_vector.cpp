/*
  Tổng số chẵn(Dùng vector) 
- Dòng 1: số test
- Dòng tiếp theo: nhập vào vector (không nhập size)
-----------
output:
tổng của các phần tử chẵn
-----------
input:
2
1 2 3 4
1 2 3 4 5
output:
6 6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int s = 0;
        int a;
        while(cin>>a){
            v.push_back(a);
        }
        // dùng 2 hàm này để xóa giá trị cin vừa nhập
        cin.clear();
        cin.ignore();
        for(auto i:v){// duyệt từng phần tử của vector
            s = (i%2==0)?s+i:s;
        }
        cout<<s<<endl;
    }
    return 0;
}