#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int>Arr; //NOTE: vector<kieu du lieu> Ten vector
    for(int i=1;i<=11;i++){
		Arr.push_back(i);
	}
	int sum=0;
	for(int i=0;i<Arr.size();i++){
		sum+=Arr[i];
	}
	cout<<"\n Sum = "<<sum;
	system("pause");
	return 0;
}