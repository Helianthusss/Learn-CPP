#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
struct SV{
	string hoten;
	float dt,dnn;
};
// cau a
void nhap(SV a[], int &n)
{
	do{
	cout<<"\n Nhap so luong sinh vien: ";
	cin>>n;
    }while(n<1||n>30);
    for(int i=0;i<n;i++)
    {
		cout<<"\n Nhap ten sinh vien: ";
		fflush(stdin);
		getline(cin,a[i].hoten);
		do{
			cout<<"\n Nhap diem tin: ";
			cin>>a[i].dt;
		}while(a[i].dt<0||a[i].dt>10);
		do{
			cout<<"\n Nhap diem ngoai ngu: ";
			cin>>a[i].dnn;
		}while(a[i].dnn<0||a[i].dnn>10);
		cout<<"\nDiem trung binh: "<<(a[i].dt + a[i].dnn)/2;	
	}
}
void xeploai(SV a[], int n)
{
	for(int i=0;i<n;i++){
	if((a[i].dt + a[i].dnn)/2 < 5) cout<<"Yeu";
	if((a[i].dt + a[i].dnn)/2 >= 5 && (a[i].dt + a[i].dnn)/2<7) cout<<"Trung binh";
	if((a[i].dt + a[i].dnn)/2 >= 7 && (a[i].dt + a[i].dnn)/2<8) cout<<"Kha";
	if((a[i].dt + a[i].dnn)/2 >= 8 && (a[i].dt + a[i].dnn)/2<10) cout<<"Gioi";}
}
//cau b
void in(SV a[], int n)
{
	cout<<"\n DANH SACH SINH VIEN LA: \n";
	cout<<"\nHo ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai \n";
	for(int i=0;i<n;i++)
	{
		cout<<setw(15)<<a[i].hoten<<setw(15)<<a[i].dt<<setw(15)<<a[i].dnn<<setw(15)<<(a[i].dt + a[i].dnn)/2<<setw(15)<<xeploai<<endl;
	}
}
//cau c
void inthilai(SV a[], int n)
{
	cout<<"\n DANH SACH SINH VIEN THI LAI\n";
	cout<<"\nHo ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai \n";
	for(int i=0;i<n;i++)
	{
		if(a[i].dt<5.5||a[i].dnn<5.5)
		   cout<<setw(15)<<a[i].hoten<<setw(15)<<a[i].dt<<setw(15)<<a[i].dnn<<setw(15)<<(a[i].dt + a[i].dnn)/2<<setw(15)<<xeploai<<endl;
	}	
}
//cau d
void insvgioi(SV a[], int n)
{
	cout<<"\n DANH SACH SINH VIEN GIOI\n";
    cout<<"\nHo ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai \n";
	for(int i=0;i<n;i++)
	{
		if((a[i].dt + a[i].dnn)/2>=8.0)
		{
		  cout<<setw(15)<<a[i].hoten<<setw(15)<<a[i].dt<<setw(15)<<a[i].dnn<<setw(15)<<(a[i].dt + a[i].dnn)/2<<setw(15)<<xeploai<<endl;
        }
	}	
}
//cau e
void indtbcaonhat(SV a[], int n)
{
	cout<<"\n DANH SACH SINH VIEN DIEM TRUNG BINH CAO NHAT: ";
	cout<<"\nHo ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai \n";
	float max=0;
	for(int i=0;i<n;i++)
	{
		if(max<(a[i].dt + a[i].dnn)/2)
		{
			max=(a[i].dt + a[i].dnn)/2;
		  cout<<setw(15)<<a[i].hoten<<setw(15)<<a[i].dt<<setw(15)<<a[i].dnn<<setw(15)<<(a[i].dt + a[i].dnn)/2<<setw(15)<<xeploai<<endl;
        }
	}	
}
//cau f
void alphabet(SV a[], int n)
{
	cout<<"\n DANH SACH SINH VIEN SAP XEP ALPHABET: ";
	cout<<"\nHo ten sinh vien\t Diem tin\t Diem ngoai ngu\t Diem trung binh\t Xep loai \n";
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a[i].hoten,a[j].hoten)<0){
				swap(a[i],a[j]);
			}	 
		}
	} 
}
int main()
{
	SV a[1000]; int n;
	nhap(a,n);
	in(a,n);
	xeploai(a,n);
	cout<<endl;
	inthilai(a,n);
	cout<<endl;
	insvgioi(a,n);
	cout<<endl;
	indtbcaonhat(a,n);
	cout<<endl;
	alphabet(a,n);
    in(a,n);
}