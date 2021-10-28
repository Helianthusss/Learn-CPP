//tim so cac cach chia so tu nhien n thanh tong cac so tu nhien nho hon n. Cac cach chia la hoan vi cua nhau chi duoc tinh la mot cach

#include <iostream>
using namespace std;
int main (void ) {
    int F[100][100], n, m, v;
    cout<<"Nhập n="; cin>>n; //Nhap n=5
    for ( int j=0; j <=n; j++) F[0][j] =0; //thiết lập dòng 0 là 0.
        F[0][0] = 1; //duy có F[0][0] thiết lập là 1
    for (m =1; m<=n; m++) { //xây dựng bảng phương án
        for (v= 0; v<=n; v++){
            if ( m > v ) F[m][v] = F[m-1][v];
            else F[m][v] = F[m-1][v] + F [m][v-m];
        }
    }
    cout<<"Kết quả:"<<F[n][n]<<endl;
}
