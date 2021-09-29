#include<iostream>
using namespace std;

class SinhVien{
   private:
      string name;
      float mathPoint;
      float literaturePoint;
    public:
       void nhap();
       void xuat();
       string getName();
       float getMathPoint();
       float getLiteralPoint();
       void setName();
       void setMathPoint();
       void setLiteralPoint();
       SinhVien mediumScore();
       


};
