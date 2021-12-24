#include<bits/stdc++.h>
using namespace std;
struct SV{
	char hoten[50];
	float dt,dnn,dtb=0;
    string xeploai;
};
// cau a
void DTB(SV  &a){
    a.dtb=(a.dt+a.dnn)/2;
}
void xepLoai(SV &a){
    if(a.dtb<5) a.xeploai="Yeu";
    else if(a.dtb>=5 && a.dtb<7) a.xeploai=" Trung binh";
    else if(a.dtb>=7 && a.dtb<8) a.xeploai="Kha";
    else a.xeploai="Gioi";
}
void nhap(SV &a){
    cout<<"\n Nhap ho ten sinh vien: ";
    fflush(stdin);
    cin.getline(a.hoten,35);
    do{
		cout<<"\n Nhap diem tin: ";
		cin>>a.dt;
		}while(a.dt<0||a.dt>10);
	do{
		cout<<"\n Nhap diem ngoai ngu: ";
		cin>>a.dnn;
		}while(a.dnn<0||a.dnn>10);
    DTB(a);
    xepLoai(a);  
}
void nhapDS(SV a[], int &n)
{
	cout<<"\n Nhap so luong sinh vien: ";
	cin>>n;
    for(int i=0; i<n; i++){
        cout<<"\nNhap sinh vien thu "<<i+1;
        nhap(a[i]);
    }
}
//cau b
void xuat(SV &a){
    cout<<a.hoten<<"\t"<<a.dt<<"\t"<<a.dnn<<"\t"<<a.dtb<<"\t"<<a.xeploai<<endl;
}
void inDS(SV a[], int n)
{
	cout<<" DANH SACH SINH VIEN LA: "<<endl;
    cout<<"Ho ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai "<<endl;
	for(int i=0;i<n;i++){   
        xuat(a[i]);
	}
}
//cau c
void inthilai(SV a[], int n){   
    int count = 0;
	cout<<" DANH SACH SINH VIEN THI LAI"<<endl;
	cout<<"Ho ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai "<<endl;
	for(int i=0;i<n;i++){
		if(a[i].dt<5.5||a[i].dnn<5.5){
            xuat(a[i]); 
            count++;
        }
	}
    if(count==0) cout<<"Khong co sinh vien nao phai thi lai"<<endl;	
}
//cau d
void insvgioi(SV a[], int n)
{   int count=0;
	cout<<" DANH SACH SINH VIEN GIOI"<<endl;
    cout<<"Ho ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai "<<endl;
	for(int i=0;i<n;i++){ 
		if(a[i].xeploai=="Gioi" && a[i].dt>=5.5 && a[i].dnn >=5.5){
	        xuat(a[i]);
            count++;
        }
	}
    if(count==0) cout<<"Khong co sinh vien gioi nao"<<endl;	
}
//cau e
void indtbcaonhat(SV a[], int n)
{
	cout<<" DANH SACH SINH VIEN DIEM TRUNG BINH CAO NHAT: "<<endl;
	cout<<"Ho ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai "<<endl;
	float max=0;
	for(int i=0;i<n;i++)
	{
		if(max<(a[i].dt + a[i].dnn)/2){
			max=(a[i].dt + a[i].dnn)/2;
        }
	}
    for(int i=0;i<n;i++)
	{
		if(max=(a[i].dt + a[i].dnn)/2){
            xuat(a[i]);
        }
	}	
}
//cau f
void alphabet(SV a[], int n)
{
	cout<<"\n DANH SACH SINH VIEN SAP XEP ALPHABET: "<<endl;
	cout<<"Ho ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai "<<endl;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a[i].hoten,a[j].hoten)>0){
				swap(a[i],a[j]);
			}	 
		}
	} 
}
int main()
{
	SV a[1000]; int n;
	nhapDS(a,n);
	inDS(a,n);
	inthilai(a,n);
	insvgioi(a,n);
	cout<<endl;
	indtbcaonhat(a,n);
	cout<<endl;
	alphabet(a,n);
    inDS(a,n);
}