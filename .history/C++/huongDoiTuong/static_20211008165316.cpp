#include<iostream> 
using namespace std; 
  
class GfG 
{ 
public: 
    static int i; 
      
    GfG(); 
}; 
  
int GfG::i = 1; 
  
int main() 
{ 
    GfG obj; 
    cout << obj.i;  
}
