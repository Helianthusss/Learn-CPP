#include<iostream>
#include<math.h>
using namespace std;

int Sumc(int a[][1000], int n)
{
   int sumc = 0;
   for(int i = 0; i < n; i++)
      sumc += a[i][i];
   return sumc;
}
int Sump(int a[][1000], int n)
{
   int sump = 0;
   for(int i = 0; i < n; i++)
      sump += a[i][n-1-i];
   return sump;
}
int main(){
    int n;
    cin >> n;
    int a[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int kq1=Sumc(a,n);
    int kq2=Sump(a,n);
    cout << abs(kq1-kq2);
    return 0;
 
}