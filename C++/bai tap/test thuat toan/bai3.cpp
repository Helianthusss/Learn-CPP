#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    string s="";
    while(cin>>a>>b){
        for(int i = a; i <= b; i++){
            ostringstream ss;
            ss<<i;
            s+=ss.str();
        }
        int count0=0, count1=0,count2=0, count3=0, count4=0, count5=0, count6=0, count7=0, count8=0;
        while(s.find('0') != -1){
            count0++;
            s.erase(s.find('0'),1);
        }
        while(s.find('1') != -1){
            count1++;
            s.erase(s.find('1'),1);
        }
        while(s.find('2') != -1){
            count2++;
            s.erase(s.find('2'),1);
        }
        while(s.find('3') != -1){
            count3++;
            s.erase(s.find('3'),1);
        }
        while(s.find('4') != -1){
            count4++;
            s.erase(s.find('4'),1);
        }
        while(s.find('5') != -1){
            count5++;
            s.erase(s.find('5'),1);
        }
        while(s.find('6') != -1){
            count6++;
            s.erase(s.find('6'),1);
        }
        while(s.find('7') != -1){
            count7++;
            s.erase(s.find('7'),1);
        }
        while(s.find('8') != -1){
            count8++;
            s.erase(s.find('8'),1);
        }
        cout<<count0<<" "<<count1<<" "<<count2<<" "<<count3<<" "<<count4<<" "<<count5<<" "<<count6<<" "<<count7<<" "<<count8<<" "<<s.length()<<endl;
    }
}