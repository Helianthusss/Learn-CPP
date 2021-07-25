// chi su dung khi mang da duoc sap xep

int BinarySearch(int a[], int n, int x){
	int left = 0, right = n-1;
	int mid;
	do{
		mid = (left + right)/2;
		if(x== a[mid]) 
		    return mid;
		else if(x < a[mid])
		    right = mid -1;
		else 
		    left = mid +1;
		
	}while (left <= right);
	return -1;
}
// tim kiem nhi phan theo dang de qui

int BinarySearch(int a[], int x, int left , int right){
	if(left > right)
	    return -1;
    int mid = (left +right)/2;
	if (x == a[mid])
	    return mid;
	if(x<a[mid])
	    return BinarySearch(a,x,left,mid-1);
	return BinarySearch(a,x,mid+1,right);
}
