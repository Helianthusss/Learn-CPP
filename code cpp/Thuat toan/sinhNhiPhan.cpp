void binaryGen( int B[], int n ){
    i = n;
    while (i > 0 && b[i] == 1) {
        b[i] = 0;
        i--;
    }
    if(i == 0) return;
    else b[i] = 1;
}