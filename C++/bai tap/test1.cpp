#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int temp = round(sqrt(n));
    int ans =temp * temp; 
    printf("%d",ans);
    return 0;
}