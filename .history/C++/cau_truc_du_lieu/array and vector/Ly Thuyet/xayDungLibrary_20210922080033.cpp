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
        bool Empty() const;
        int Size() const;
        int Capacity() const;

        bool operator==(const Vector& rhs) const;
        bool operator!=(const Vector& rhs) const;


};
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
bool Vector::Empty() const{
    return size==0;
}
int Vector::Size() const{
    return size;
}
int Vector::Capacity() const{
    return capacity;
}
bool operator==(const Vector& rhs) const{
    if(Size() != rhs.Size()) return false;
    for(int i=0;i<Size();++i){
        if(array[i] != rhs.array[i]){
            return false;
        }
    }
    return true;
}
bool operator!=(const Vector& rhs) const{
    
}
int main(){
    Vector v;
    v.Push_back(5);

    return 0;
}