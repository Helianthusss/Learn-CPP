#include<bits/stdc++.h>
using namespace std;
class MH{
    private:
        string tmh;
        int sl;
        float dg;
    public:
        void nhap();
        void xuat();
        float tien();
        int getSL();
        float getDg();
};
class HD:public MH{
    private:
        string thd;
        MH *dsmh;
        int slmh;
    public:
        void nhap();
        void In();
        float tongt(float *t, int n);
        float tienHD();
        string getTHD();
};
void MH::nhap(){
    cout<<"Ten mat hang: "; 
    fflush(stdin);
    getline(cin, tmh);
    cout<<"So luong: "; 
    fflush(stdin);
    cin>>sl;
    cout<<"Don gia: "; 
    cin>>dg;
}
void MH::xuat(){
    cout<<"Ten mat hang: "<<tmh<<", so luong"<<sl<<", don gia: "<<dg<<endl;
}
int MH::getSL(){
    return sl;
}
float MH::getDg(){
    return dg;
}
string HD::getTHD(){
    return thd;
}
void HD::nhap(){
    cout<<endl<<"Ten hoa don: ";
    fflush(stdin);
    getline(cin, thd);
    cout<<endl<<"So luong mat hang: "; 
    cin>>slmh;
    cout<<endl<<"Danh sach mat hang: "<<endl;
    fflush(stdin);
    dsmh = new MH[slmh];
    for(int i=0; i<slmh;i++){
        cout<<"==>Mat hang "<<i+1<<endl;
        dsmh[i].nhap();
    }
}
void HD::In(){
    cout<<"Ten hoa don: "<<thd<<endl;
    cout<<"So luong mat hang: "<<slmh<<endl;
    cout<<"Danh sach mat hang: "<<endl;
    for(int i=0; i<slmh;i++){
        cout<<"==>Mat hang "<<i+1<<endl;
        dsmh[i].xuat();
    }
    cout<<"Tong tien: "<<tienHD()<< endl;
}
float MH::tien(){
    return (float)(sl*dg);
}
float HD::tienHD(){
    float sum = 0;
    for(int i=0; i<slmh;i++){
        sum += dsmh[i].tien();
    }
    return sum;
}
float HD::tongt(float *t, int n){
    int s=1;
    for (int i = 1;i<n;i++)
        s += tien()+*(t+i);
        return s;
}
int main(){
    HD *a;
    int n;
    cout<<"Nhap so luong hoa don: ";    cin>>n;
    a = new HD[n];
    for(int i=0; i<n;i++){
        cout<<"!!!Hoa don "<<i+1;
        a[i].nhap();
    }
    cout<<"Xuat cac hoa don: "<<endl;
    for(int i=0; i<n;i++){
        cout<<"!!!Hoa don "<<i+1<<endl;
        a[i].In();
    }
    cout<<"\nHoa don co tong tien lon nhat"<<endl;
    int max=a[0].tienHD();
    for(int i=0;i<n;i++){
        if(max<a[i].tienHD()) max=a[i].tienHD();
    }
    for(int i=0;i<n;i++){
        if(a[i].tienHD()==max) a[i].In();
    }
    cout<<"\nHoa don co tong tien nho nhat"<<endl;
    int min=a[0].tienHD();
    for(int i=0;i<n;i++){
        if(min>a[i].tienHD()) min=a[i].tienHD();
    }
    for(int i=0;i<n;i++){
        if(a[i].tienHD()==min) a[i].In();
    }
    string name;
    cout<<"\nNhap ten hoa don can tim";
    getline(cin, name);
    for(int i=0;i<n;i++){
        if(strcmp(a[i].getTHD(),name)==0) a[i].In();
    }
    return 0;
}