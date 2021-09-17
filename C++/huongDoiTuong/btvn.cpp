#include <iostream>
using namespace std;

class ArrayList {
public:
	ArrayList(); 			// initialize an empty list 
	bool isEmpty() const; 	// check if the list is empty
	int length() const; 	// get the number of elements in a list
	void insert(const int x, int i); 	// insert x at the position i
	void append(const int x); 	// insert x at the end of the list
	void remove(int i); 		// remove the ith element
	int retrieve(int i) const; // return the value the ith element
	void print() const; 	// print all element values
		
private:
	int *element;
    int size;	// array to store all list elements
	int last;	// index of the last item
};
// Definition of all ArrayList methods
ArrayList::ArrayList(){
	last = -1;
}
bool ArrayList::isEmpty() const {
	return (last == -1);
}
int ArrayList::length() const {
	return (last+1);
}
void ArrayList::append(const int x){
    if(last +1 == size) {
        cout << "the list is full\n";
        exit(0);
    }
    *(element+last +1) = x;
    last ++;   
}
void ArrayList::print() const {
	for(int i=0;i<=last;i++)
	{
		cout<<*(element+i)<<"  ";
	}
}
void ArrayList::insert(const int x,int i){
	//case1:List full
	if((last+1)==size)
	{
		cout<<"List is full.";
        exit(0);
	}		
	for(int m=last+1;m>i;m--){
		*(element+m)=*(element+m-1);
	}
	*(element+i)=x;
    last++;
}
void ArrayList::remove(int i){
	for(int m=i;m<last;m++)
	{
		*(element+m)=*(element+m+1);   
	}
    last --;
}
int ArrayList::retrieve(int i) const{
    int value;
    for(int m=0;m<=last;m++){
        if(*(element+m)== *(element+i)) value = *(element+m);   
    }
    return value;
}
// Main function
int main() {
	ArrayList *list;
	list = new ArrayList;
	list->append(3);
	list->append(4);
    list->insert(5,1);
    list->remove(3);
	list->print();
    cout <<"\n"<<list->retrieve(1);
    delete []list;
	return 0;
}
