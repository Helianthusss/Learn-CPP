#include<iostream> 
using namespace std; 
  
class Rectangle
{
    private:
        int width;
        int length;
        static int count;
    public:
        void set(int w, int l);
        int area();
        Rectangle()
        {
            count++;
        }
        Rectangle(int x, int y) 
        { 
            count++; 
            set(x,y);
        }
};
int Rectangle::count = 0;
int main(){
    Rectangle r1(2,4);
    Rectangle r2(1,2);
    Rectangle r3;
    return 0;
}