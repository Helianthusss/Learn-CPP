// #include <iostream>
// using namespace std;

// int main() {
// 	int t;cin>>t;
// 	while(t--){
// 	    int x,y;
// 	    cin>>x>>y;
// 	    if(x < y) cout<<"FIRST"<<endl;
// 	    else if(x>y) cout<<"SECOND"<<endl;
// 	    else cout<<"ANY"<<endl;
// 	}
// 	return 0;
// }
// C
#include<stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        if(x < y) printf("FIRST\n");
	    else if(x>y) printf("SECOND\n");
	    else printf("ANY\n");
    }
    return 0;
}
