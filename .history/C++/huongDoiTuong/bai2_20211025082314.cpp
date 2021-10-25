#include<iostream.h>
using namespace std;
class nGuoi
{
	private:
	  char ht[30];
	  int cmt;
	  int tuoi;
    public:
    nGuoi(char ht[ ]=" ",int cmt=0,int tuoi=0){
        strcpy(this->ht,ht);
        this->cmt=cmt;
        this->tuoi=tuoi;
    }
    ~nGuoi(){
	}
friend istream &operator >> (istream &is,nGuoi &n)
{
	fflush(stdin);
	cout<<"+ Nhap ho ten :";
	is.getline(n.ht,30);
	cout<<"+ Nhap vao chung minh thu:";
	is>>n.cmt;
	cout<<"+ Nhap vao tuoi:";
	is>>n.tuoi;
	return is;
}
friend ostream &operator << (ostream &os,nGuoi &n)
{
	os<<"Ho ten:"<<n.ht<<endl;
	os<<"Chung minh thu:"<<n.cmt<<endl;
	os<<"Tuoi:"<<n.tuoi<<endl;
}
int geHt()
{
	return this->tuoi;
}
bool dem operator ==(char ht[])
{
	if(strcmp(this->ht,"Anh")==0)
	{
		return true;
		}
		return false;
	
}
};
void nhap (nGuoi a[],int n)
{
	cout<<"============NHAP VAO DANH SACH NGUOI========="<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap vao nguoi thu"<<i+1<<endl;
		cin>>a[i];
	}
}
void xuat(nGuoi a[],int n)
{
	cout<<"==========DANH SACH NGUOI ============="<<endl;
	for(int i=0;i<n;i++)
	{
		cout<< a[i];
	}
}
void tim_kiem(nGuoi a[],int n)
{
	cout<<"==========DANH SACH NGUOI CO TUOI >10============="<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i].geHt()>10)
		{
			cout<<a[i];
			}
	}
}
void chinh_sua(nGuoi a[],int n)
{
	int number;
	cout<<"Nhap vao ma chung minh thu can sua:";
	cin>>number;
	for(int i=0;i,n;i++)
	{
		if(number==a[i].cmt){
            cout<<"\nNhap lai ten: "; cin>>a[i].ht;
            cout<<"\nNhap lai tuoi: "; cin>>a[i].tuoi;
        }
	}
}
int main()
{
	nGuoi a[100];
	int n;
	cout<<"Nhap so luong nguoi:";
	cin>>n;
	nhap(a,n);
	xuat(a,n);
	tim_kiem(a,n);
	cout<<"===========DANH SACH NGUOI CO TEN ANH ============"<<endl;
	for(int i=0;i<n;i++)
	{
		if(dem(strcmp(a[i],"Anh")))
		{
			cout<<a[i];
		}
	}
	return 0;
}