#include<iostream>
#include<vector>
#include<string>

using namespace std;

void enter(vector<string>&animals , int size);
void print(vector<string>&animals, int size);
int main(){
    vector<string>animals;
    int size =animals.size();
    enter(animals,size);
    print(animals,size);
}
void enter(vector<string>&animals , int size){
    string animal;
    cout<<"Enter the number of elements: ";
    cin>>size;
    for(int i=0;i<size;i++){
    	cout << "\nanimal["<<i<<"]"<<"= ";
        cin>>animal;
        animals.push_back(animal);
    }
}
void print(vector<string>&animals, int size){
    for(vector<string>::iterator it = animals.begin(); it!= animals.end(); it++)
    	cout <<*it<<" ";
    }
