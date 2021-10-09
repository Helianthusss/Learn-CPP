#include<iostream> 
using namespace std; 
 
class GfG { 
    int i = 0;   
    public: 
    GfG(); 
    ~GfG(); 
}; 
GFG::GfG(){ 
    i = 0; 
    cout << "Inside Constructor\n"; 
} 
GFG::~GfG(); { 
    cout << "Inside Destructor\n"; 
} 
int main() 
{ 
    int x = 0; 
    if (x==0) 
    { 
        GfG obj; 
    } 
    cout << "End of main\n"; 
}