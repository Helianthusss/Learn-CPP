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
bool CArrayQueue<Item>::isEmpty(){
    return (read==write);
}

template <typename Item>
bool CArrayQueue<Item>::isFull(){
    return ((write+1)%length==read);
}
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
	// write your code here
    if(!isFull()) {
        buf[write]=v;
        write = (write +1)%length;
    }
}
template <typename Item>
Item CArrayQueue<Item>::dequeue() { 
	// write your code here
    if(isEmpty()) {
        cout<<"Empty queue";
        return -1;
    }
    else{
        Item r=buf[read];
        read = (read + 1)%length;
        return r;
    }
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
