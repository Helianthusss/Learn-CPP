#include<iostream>
using namespace std;

struct stack{  //dinh nghia cau truc stack
    int n;
    int a[MAX];
};
void init(stack &s){  // ham khoi tao
    s.n=-1;
}
bool isempty (stack s){ // ham kiem tra ngan xep co rong khong
    if(s.n==-1)
        return true;
    return false;
}
bool isfull(stack s) {  // ham kiem tra ngan xep day khong
    return (s.n==MAX-1);
}
void push(stack &s, int x) { // ham them 1 phan tu vao stack
    if (isfull(s))
        cout <<" Ngan xep day !";
    else{
        s.n++;
        s.a[s.n]=x;
    }
}
int pop (stack &s) {  // ham lay mot phan tu khoi stack
    if(isempty(s)){
        cout <<"Ngan xep rong !";
        return -1;
    }else
        return s.a[s.n--];
}
int precedence(char x){
	if (x == '(')
		return 0;
	if (x == '+' || x == '-')
		return 1 ;
	if (x == '*' || x == '/' || x == '%')
		return 2;

	return 3;
}
void infixtoPostfix(char infix[], char postfix[])
{
	stack S;
	char x, token;
	int i = 0, j = 0;    
	init(S);
	for (i = 0; infix[i] != '\0'; i++){
		token = infix[i];
		if (isalnum(token))
			postfix[j++] = token;
		else
			if (token == '(')
				push(S, '(');
			else
				if (token == ')')
					while ((x = pop(S)) != '(')
						postfix[j++] = x;
				else
				{
					while (precedence(token) <= precedence(top(S)) && !isempty(S))
					{
						x = pop(S);
						postfix[j++] = x;
					}
					push(S, token);
				}
	}

	while (!isempty(S))
	{
		x = pop(S);
		postfix[j++] = x;
	}

	postfix[j] = '\0';
}