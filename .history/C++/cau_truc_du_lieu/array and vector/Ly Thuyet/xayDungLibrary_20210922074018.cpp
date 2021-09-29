#include<iostream>
using namespace std;


class Vector{
    private:
        int *array;
        int size;
        int capacity;
    public:
        Vector();
        ~Vector();
        void Push_back(int value);
        bool Empty();
        int Size();
        int Capacity();

}
Vector::Vector()
   : size(0),
    capacity(5),
    array(new int[capacity])
{

}
Vector::~Vector(){
    delete [] array;
}
void Vector::Push_back(int value){
    array[size]=value;
    ++size;
}
bool Vector::Empty(){
    return size==0;
}
int Vector::Size(){
    return size;
}
int Vector::Capacity(){
    return capacity;
}
int main(){
    Vector v;
    v.Push_back(5);

    return 0;
}