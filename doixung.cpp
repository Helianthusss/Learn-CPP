#include <stdio.h>
#include <string.h>
bool IsNumber(char s[], int n){
    if(n == 0) return false;
    if(s[0] == '0') return false;
    for(int i = 0; i < n;i++){
        if(s[i] < '0' || s[i] > '9') return false;
    }
    return true;
}
int main(){
    char s[100];
    gets(s);
    int n = strlen(s);
    if(IsNumber(s, n) == false){
        printf("\nBan nhap sai dinh dang!");
        return 0;
    }
    bool isPar = true;
    int i = 0, j = n - 1;
    while(i < j){
        if(s[i] != s[j]){
            isPar = false;
            break;
        }else{
            ++i; 
            --j; 
        }
    }
    if(isPar == true){
        printf("%s la so doi xung!", s);
    }else{
        printf("%s khong la so doi xung!", s);
    }
}
