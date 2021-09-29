#include<iostream>
using namespace std;


class Vector{
    private:
        int *array;
        int size;
        int capacity;
    public:
        Vector();
        Vector(const Vector& rhs);
        Vector(int element, int value = 0);

        ~Vector();

        void Push_back(int value);

        bool Empty() const;
        int Size() const;
        int Capacity() const;

        bool operator==(const Vector& rhs) const;
        bool operator!=(const Vector& rhs) const;
       
        friend ostream& operator <<(ostream& ostr, const Vector& rhs);

};
Vector::Vector()
   : size(0),
    capacity(5),
    array(new int[capacity])
{

}
Vector::Vector(const Vector& rhs)
    : size(rhs.size),
      capacity(rhs.capacity),
      array(new int[capacity])
{
    for(int i=0;i<rhs.Size();++i){
        array[i]= rhs.array[i];
    }
}
Vector::Vector(int element, int value)
    : size(element),
       capacity(element+5),
       array(new int[capacity])
{
    for(int i=0;i<size;++i){
        array[i] = value;
    }
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
   return !(*this == rhs);
}
ostream& operator <<(ostream& ostr, const Vector& rhs){
    for(int i=0;i<rhs.size;++i){
        ostr << rhs.array[i] <<" ";
    }
    ostr<< " || ";

    for(int i=rhs.size;i<rhs.capacity;++i){
        ostr <<rhs.array[i]<<" ";
    }
    ostr<<endl;
    return ostr;
}
int main(){
    Vector v;
    cout <<v<<endl;
    v.Push_back(5);
    cout <<v<<endl;
    v.Push_back(5100);
    cout <<v<<endl;
    return 0;
}