#include<iostream>  
using namespace std;  
typedef char Item;
struct Node{
	Item data;
	Node *next;
};
 
struct stack{
	Node *top;
	long size;
 
	stack();
	void traverse() const;	
	Node* CreateNode(Item v);		
	void push(Item v);
    bool empty();
	Item pop();
	Item peek();	
};
stack::stack() {
	top = NULL;
	size = 0;
}
void stack::traverse() const {
	Node *p = top;
	while (p != NULL) {
		cout << p->data << "\t";
		p = p->next;
	}
	delete p;
}
Node* stack::CreateNode(Item v) {
	Node* p = new Node;
	p->data = v;	
	p->next = NULL;	
	return p; 
}	
void stack::push(Item v) {
	Node* p = CreateNode(v);
	p->next = top;
	top = p;	
	size++;
}
bool stack::empty(){
    if(size==-1)
        return true;
    return false;
}
Item stack::pop() {	
	Node *t = top;
	Item data = top->data;
	top = top->next;
	delete t;
	size--;	
	return data;
}
Item stack::peek() {
	return top->data;
}
// đinh nghia ham IsOperator () để kiem tra xem co ky tu nao la toan tu hay khong.   
bool IsOperator(char c) {  
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' )  
        return true;     
    return false;  
}  
// ham  kiem tra toan hang 
bool IsOperand(char c)  {  
    if( c >= 'A' && c <= 'Z')  
        return true;  
    if (c >= 'a' && c <= 'z')  
        return true;  
    if(c >= '0' && c <= '9')    
        return true;  
    return false;  
}  
// ham xac đinh muc đo uu tien thuat toan
int precedence(char op)  {  
    if(op == '+' || op == '-')                    
        return 1;  
    if (op == '*' || op == '/')  
        return 2;  
    if(op == '^')                                  
        return 3;       
    return 0; 
} 
/* Ham eqlOrhigher () đe kiem tra muc đo uu tien cao hon hoặc bang nhau cua hai toan tu trong bieu thuc infix*/  
bool eqlOrhigher (char op1, char op2)  {  
    int p1 = precedence(op1);  
    int p2 = precedence(op2);  
    if (p1 == p2)  {  
        if (op1 == '^' )  return false;  
        return true;  
    }  
    return  (p1>p2 ? true : false);  
}  
/* ham string convert () đuoc su dung đe chuyen đoi bieu thuc infix thanh bieu thuc hau to cua Stack */  
string convert(string infix) {  
    stack S;  
    string postfix ="";    
    char ch;
    S.push( '(' );  
    infix += ')';  
    for(int i = 0; i<infix.length(); i++){  
        ch = infix[i];  
        if(ch == ' ')  continue;  
        else if(ch == '(')  S.push(ch);  
        else if(IsOperand(ch))  postfix += ch;  
        else if(IsOperator(ch)) {  
            while(!S.empty() && eqlOrhigher(S.top->data, ch)){  
                postfix += S.top->data;  
                S.pop();  
            }  
            S.push(ch);  
        }  
        else if(ch == ')'){  
            while(!S.empty() && S.top->data != '(') {  
                postfix += S.top->data;  
                S.pop();  
            }  
            S.pop();  
        }  
    }  
    return postfix;  
}  
 
int main()  {  
    string infix_expression, postfix_expression;  
    int ch;  
    cout << " Nhap bieu thuc trung to: ";  
    cin >> infix_expression;  
    postfix_expression = convert(infix_expression);  
    cout << "\n Bieu thuc hau to cua ban la: " << postfix_expression;  
    return 0;  
}  