// https://www.codechef.com/submit/HS08TEST

#include<bits/stdc++.h>

using namespace std;

// CPP
int main(){
    int w;
    float ac_bl;
    cin>>w;
    cin>>ac_bl;
    if(w%5==0 && w<=ac_bl-0.5)
        cout<<((ac_bl-w)-(0.5));
    else
        cout<<ac_bl;
    
    return 0;
}
// C
int main(){
    int w;
    float ac_bl;
    scanf("%d",&w);
    scanf("%f",&ac_bl);
    if(w%5==0 && w<=ac_bl-0.5){
        float money = (ac_bl-w)-(0.5);
        printf("%.2f",money);
    }
    else
        printf("%.2f",ac_bl);
    
    return 0;
}