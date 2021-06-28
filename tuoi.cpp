#include<iostream>

using namespace std; 

int main(){
	NhapLaiTuoi:
	int tuoicha = 0, tuoicon  = 0, sonam  = 0;
	cout <<"Nhap vao tuoi cua cha la: ";
	cin>>tuoicha;
	cout <<"Nhap vao tuoi cua con la: ";
	cin >>tuoicon;
	if(tuoicha < 2*tuoicon){
		goto NhapLaiTuoi;
	}
	bool thuchien = true;
	while(thuchien){
		if(tuoicha == (2*tuoicon)){
			thuchien = false;
		}
		else{
			tuoicha++;
			tuoicon++;
			sonam++;
		}
	}
	cout <<"So nam ma tuoi cua cha gap 2 lan tuoi con la: "<<sonam<<endl;
	cout <<"Tuoi cua cha la: "<<tuoicha<<endl;
	cout <<"Tuoi cua con la: "<<tuoicon<<endl;
}
