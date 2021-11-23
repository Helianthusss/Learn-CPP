// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

#include<iostream>
#include<algorithm>
using namespace std;

void BubbleSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void SelectionSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int minV=a[i],pMin=i;
        for(int j=i+1 ;j<n;j++){
            if(minV>a[j]){
                minV=a[j];
                pMin =j;
            }
        }
        if(i!=pMin) swap(a[i],a[pMin]);
    }
}
void InsertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int x=a[i];
        int j=i-1;
        while(j>=0&&a[j]>x){ 
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
void QuickSort(int a[], int left, int right){
    int x=a[(left+right)/2];
    int i=left,j=right;
    do{
        while(a[i]<x) i++;
        while(a[j]>x) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<j);
    if(left<j) QuickSort(a,left,j);   
    if(right>i) QuickSort(a,i,right);
}
void merge(int a[], int left, int mid, int right){
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int *L = new int[n1];
	int *R = new int[n2];
	for (int i = 0; i < n1; i++)
		L[i] = a[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = a[mid + j + 1];
	int i = 0;
	int j = 0;
	int k = left;
	while (i < n1 && j < n2)
		a[k++] = (L[i] < R[j]) ? L[i++] : R[j++];
	while (j < n2)
		a[k++] = R[j++];
	while (i < n1)
		a[k++] = L[i++];
	delete[] L;
	delete[] R;
}
void mergeSort(int a[], int left, int right)
{
	if (left < right)
	{
		int mid = left + (right - left) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid + 1, right);
		merge(a, left, mid, right);
	}
}
int linearSearch(int a[], int n,int key){
    for(int i=0; i<n;i++){
        if(a[i]==key) return i;
    }
    return -1;
}
int binarySearch(int a[], int n, int key){
    int left =0, right =n-1,mid;  
    while(left<=right) {
        mid = (left+right)/2;
        if(a[mid]==key) return mid;
        if(a[mid]<key) left=mid+1;
        else right=mid-1;
    } 
    return -1;
}
int main(){
    int *a = new int[5];
    a[0]=4;
    a[1]=12;
    a[2]=7;
    a[3]=15;
    a[4]=9;
    BubbleSort(a,5);
    SelectionSort(a,5);
    InsertionSort(a,5);
    QuickSort(a,0,4);
    mergeSort(a,0,4);
    cout<<"\nVi tri so can tim la: "<<linearSearch(a,5,7);
    cout<<"\nVi tri so can tim la: "<<binarySearch(a,5,15);
    delete[] a;
    return 0;
}