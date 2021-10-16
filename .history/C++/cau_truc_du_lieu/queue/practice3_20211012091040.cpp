#include <iostream>
using namespace std;

template <typename Item>
class CArrayQueue {
public:
	CArrayQueue(int size);	
	bool isEmpty();
	bool isFull();
	int getRead();
	int getWrite();
	int getLength();
	void enqueue(Item v);
	Item dequeue();
	void show();
private:
	Item *buf;	// circular buffer
	int read;	// read pointer
	int write;	// write pointer
	int length;	// buffer length
};
template <typename Item>
CArrayQueue<Item>::CArrayQueue(int size) {
	buf = new Item[size];
	read = 0;
	write = 0;
	length = size;
}
template <typename Item>
CArrayQueue<Item>::getRead(){
    return read;
}

template <typename Item>
CArrayQueue<Item>::getWrite(){
    return write;
}
template <typename Item>
CArrayQueue<Item>::getLength(){
    return length;
}
template <typename Item>
void CArrayQueue<Item>::enqueue(Item v) {
    buf = new Item;
  if(read==-1 && write==-1)    
    {  
        read=0;  
        write=0;  
        buf[write]=v;  
    }  
    else if((write+1)%buf.length==read)   
    {  
        cout<<"Queue is overflow..";  
    }  
    else  
    {  
        write=(write+1)%buf->length;        
        buf[write]=v;     
    }  
	// write your code here
}
template <typename Item>
Item CArrayQueue<Item>::dequeue() {
      if((read==-1) && (write==-1))    
    {  
        cout<<"\nQueue is underflow..";  
    }  
    else if(read==write) {  
        cout<<"\nThe dequeued element is "<<buf[read];  
        read=-1;  
        write=-1;  
    }   
    else {  
    cout<<"\nThe dequeued element is "<<buf[read];  
   read=(read+1)%buf->length;  
}  
 
	// write your code here
}
template <typename Item>
void CArrayQueue<Item>::show() {
	if (read == write) {
		cout << "empty queue" << endl;
		return;
	}
	for (int i = read; i < write; i++)
		cout << buf[i] << "\t";
	cout << endl;
}
void printQueueInfo(CArrayQueue<int> Q) {
	Q.show();
	cout << "length = " << Q.getLength() << endl;
	cout << "read pointer = " << Q.getRead() << endl;
	cout << "write pointer = " << Q.getWrite() << endl;
	cout << endl;
}
int main() {
	CArrayQueue<int> Q(10);
	cout << "Test initialization function\n";
	printQueueInfo(Q);
	
	cout << "\nTest enqueue function\n";
	Q.enqueue(5);
	printQueueInfo(Q);	
	Q.enqueue(2);
	printQueueInfo(Q);
	Q.enqueue(3);
	printQueueInfo(Q);
	
	cout << "\nTest dequeue function\n";
	int x = Q.dequeue();
	cout << "Return value = " << x << endl;
	printQueueInfo(Q);	
	x = Q.dequeue();
	cout << "Return value = " << x << endl;
	printQueueInfo(Q);
	x = Q.dequeue();
	cout << "Return value = " << x << endl;
	printQueueInfo(Q);
	
	return 0;
}
