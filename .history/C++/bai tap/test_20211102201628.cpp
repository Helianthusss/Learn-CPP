int linearSearch(int a[],int n,int key){
    int i=0;
    while(i<n){
        if(key==a[i]) return i;
        i++;
    }
    return -1;
}