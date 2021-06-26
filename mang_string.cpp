#include<iostream>
#include<iomanip>
using namespace std;
void print(string languages[], int size);
void add(string language[], int &size, string val, int pos);
void remove(string languages[], int &size, int pos);
int main(){
    // xu?t m?ng string
    int size=5,pos;
    string languages[] = {"C++", "java","C#","PHP","js"},val;// array initialization
   // char val; 
    print(languages,size);
    add(languages,size,val,pos);
    print(languages,size);
    remove(languages,size,pos);
    print(languages,size);
    return 0;
}
void print(string languages[], int size){
 for(int i = 0; i < size;i++){
        cout<<languages[i]<<" ";
    }
}
void add(string languages[], int &size, string val, int pos){
	cout<<"\nEnter the required language:";
    cin>>val;
    // Dich chuyen mang de tao o trong truoc khi them.
    for(int i = size-1; i > pos; i--){
        languages[i] = languages[i-1];
    }
    // Chen val tai pos
    languages[pos] = val;
    // Tang so luong phan tu sau khi chen.
    ++size;
}
void remove(string languages[], int &size, int pos){
	for(int i = pos; i < size-1; i++){
        languages[i] = languages[i-1];
    }
    // Giam so luong phan tu sau khi xoa.
    --size;
}
