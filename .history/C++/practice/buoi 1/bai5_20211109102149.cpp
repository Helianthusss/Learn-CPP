// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com


// Khởi tạo Stack rỗng.
// Khởi tạo 2 chuỗi x và token; i, j lần lượt là index của Infix và Postfix.
// Duyệt vòng lặp for từ i = 1 cho đến cuối chuỗi Infix:
// Nếu Infix[i] là toán hạng thì đưa vào Postfix.
// Nếu Infix[i] là toán tử thì Push vào ngăn xếp S.
// Nếu Infix[i] là “)” thì Pop vào ngăn xếp S (lấy giá trị trên đỉnh của S) sau đó đưa vào Postfix.
// Output: Postfix là biểu thức hậu tố
#include<bits/stdc++.h>  
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
Item stack::top() {
	return top->data;
}
// định nghĩa hàm IsOperator () để kiem tra xem có ký tự nào là toán tử hay không.   
bool IsOperator(char c) {  
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' )  
        return true;     
    return false;  
}  
// ham  kiem tra toán hạng 
bool IsOperand(char c)  {  
    if( c >= 'A' && c <= 'Z')  
        return true;  
    if (c >= 'a' && c <= 'z')  
        return true;  
    if(c >= '0' && c <= '9')    
        return true;  
    return false;  
}  
// hàm xác định mức độ ưu tiên thuật toán
int precedence(char op)  {  
    if(op == '+' || op == '-')                    
        return 1;  
    if (op == '*' || op == '/')  
        return 2;  
    if(op == '^')                                  
        return 3;       
    return 0; 
} 
/* Hàm eqlOrhigher () đ để kiểm tra mức độ ưu tiên cao hơn hoặc bằng nhau của hai toán tử trong biểu thức infix*/  
bool eqlOrhigher (char op1, char op2)  {  
    int p1 = precedence(op1);  
    int p2 = precedence(op2);  
    if (p1 == p2)  {  
        if (op1 == '^' )  return false;  
        return true;  
    }  
    return  (p1>p2 ? true : false);  
}  
/* hàm string convert () được sử dụng để chuyển đổi biểu thức infix thành biểu thức hậu tố của Stack */  
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
            while(!S.empty() && eqlOrhigher(S.top(), ch)){  
                postfix += S.top();  
                S.pop();  
            }  
            S.push(ch);  
        }  
        else if(ch == ')'){  
            while(!S.empty() && S.top() != '(') {  
                postfix += S.top();  
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
