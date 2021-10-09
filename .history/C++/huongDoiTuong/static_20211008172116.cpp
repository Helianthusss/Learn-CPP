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
}
int main()
{
    int Rectangle::count = 0;
 
    // Sau khi khởi tạo giá trị đầu mình tạo minh họa 3 hình chữ nhật
    Rectangle r1(2,4);
    Rectangle r2(1,2);
}