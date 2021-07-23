#include<iostream>
using namespace std;

class Node{
	public:
	    int data;
		Node *next;

		Node(int data){
            this->data = data;
			next = NULL;
		}
};

class LinkedList{
	private:
	    Node *header;
		Node *tail;
		int size;
	public:
	    LinkedList(){
			header = NULL;
			tail = NULL;
			size = 0;
		}
		int getSize(){
			return size;
		}
}

void append(int data){
	// create new Node
	Node *n = new Node(data);
	//Case 1: empty LinkedList
    if(header == NULL){
		header = n;
		tail = n;
	}
	//Case 2: List is not empty
	else{
		tail->next = n;
		tail =n;
	} 
}
int main(){

}