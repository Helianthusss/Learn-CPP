#include<bits/stdc++.h>
using namespace std;

void countingSort(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];

	int *count = new int[max + 1];
	for (int i = 0; i <= max; i++)
		count[i] = 0;

	for (int i = 0; i < n; i++)
		count[a[i]]++;

	for (int i = 1; i <= max; i++)
		count[i] += count[i - 1];

	int *temp = new int[n];
	for (int i = 0; i < n; i++)
	{
		temp[count[a[i]] - 1] = a[i];
		count[a[i]]--;
	}

	for (int i = 0; i < n; i++)
		a[i] = temp[i];
	delete[] count;
	delete[] temp;
}
int main() {
	int a[100];
	int n = 0;
	cin>> n;
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	countingSort(a,n);
	bool found =false;
	for(int i=0;i<n+1;i++){
		if(a[i] == a[i+1]){
			found = true;
			break;
		}
	}
	if (found) {
		cout << "YES"<<endl;
	}else cout << "NO"<<endl;
	return 0;
}