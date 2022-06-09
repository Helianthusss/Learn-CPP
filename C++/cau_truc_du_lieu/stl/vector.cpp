#include<vector>
#include<iostream>

using namespace std;

vector <int> v; // khai báo vector  
vector <int>::iterator it; // khai báo iterator
vector <int>::reverse_iterator rit; // khai báo iterator ngược
int i;
int main(){
    for(i=1;i<=5; i++) v.push_back(i);
    cout<<v.front()<< endl<<v.back()<< endl;
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v.clear();
    cout<<v.empty()<<endl;
    for(i=1;i<=5; i++) v.push_back(i);
    v.pop_back();
    cout<<v.size()<<endl;
    v.erase(v.begin()+1);
    v.erase(v.begin(),v.end() +2);
    v.insert(v.begin() , 100);
    v.insert(v.end(),5);

    for(i=0 ; i< v.size() ; i++) cout<< v[i]<<" ";
    cout<<endl;
    for(it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    cout<<endl;

    for(rit=v.rbegin();rit!=v.rend();rit++) cout<<*rit<<" ";
    cout<<endl;
    system("pause");
    return 0;
}