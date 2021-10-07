#include<bits/stdc++.h>
using namespace std;

int wordCount(char str[], int length)
{
    int word = (str[0] != ' ');
    for (int i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}
int main(){
    char str[1000];
    cin.getline(str);
    int length = strlen(str) - 1; 
    str[length] = '\0';
    cout<<wordCount(str,length);
    return 0;
}