// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn
#include <iostream>
using namespace std;
class Book{
    private:
        string name;
        int page;
    public:
        Book();
        void input();
        void output();
        string getName(){
            return name;
        }
        int getPage(){
            return page;
        }
};
Book::Book(){
    name = " ";
    page = 0;
}
void Book::input(){
    fflush(stdin);
    cout << "Book name: ";
    getline(cin, name);
    cout << "number of page: " ;
    cin >> page;
}
void Book::output(){
    cout <<" Name: "<<name<< ", Page: "<<page<<endl;
}
void swap(Book &a, Book &b){
    Book temp;
    temp = a;
    a = b; 
    b = temp;
}
void SortBook(Book *a, int n){//selection Sort
    for(int i=0; i<n-1; i++){
        Book minV = *(a+i);
        int pMin = i;
        for(int j=i+1; j < n; j++){
            if(minV.getName() > (a+j)->getName()){
                minV = *(a+j);
                pMin = j;
            }
        }
        if (i!=pMin){
           swap (*(a+i), *(a+pMin));
        }
    }
}
void SortPage(Book* a, int n){//selection sort
    for(int i=0; i<n-1; i++){
        Book minV = *(a+i);
        int pMin = i;
        for(int j=i+1; j < n; j++){
            if(minV.getPage() < (a+j)->getPage()){
                minV = *(a+j);
                pMin = j;
            }
        }
        if (i!=pMin){
           swap (*(a+i), *(a+pMin));
        }
    }
}
Book findBook(Book *a, int n, string name){//binary search
    int left = 0, right = n-1, mid;
    while (left <= right){
        mid = (left + right)/ 2;
        if (a[mid].getName() == name)
            return a[mid];
        if (a[mid].getName() < name)
            left = mid+1;
        else
            right = mid-1;
    }
    Book notthing;
    return notthing;
}
void statistics(Book *a, int n, int p){
    for(int i=0; i < n; i++){
        if((a+i)->getPage() < p){
            (a+i)->output();
        }
    }
}
int main(){
    Book *list;
    int n;
    cout<<"Enter number of book: "; cin>>n;
    list = new Book[n];
    cout <<endl<<"Book infomation"<<endl;
    for (int i=0; i < n; i++){
        cout <<"Book "<<i+1<<endl;
        (list+i)->input();
    }
    for (int i=0; i < n; i++){
        cout <<"Number: "<<i+1;
        (list+i)->output();
    }
    SortBook(list, n);
    cout <<endl<<"Sort by name"<<endl;
    for (int i=0; i < n; i++){
        cout <<"Number: "<<i+1;
        (list+i)->output();
    }
    SortPage(list, n);
    cout <<endl<<"Sort by page"<<endl;
    for (int i=0; i < n; i++){
        cout <<"Number: "<<i+1;
        (list+i)->output();
    }
    string name;
    cout<<"Enter book name to find: ";
    fflush(stdin);
    getline(cin, name);
    if(findBook(list, n, name).getName() == " "){
        cout<<"Not Found"<<endl;
    }else findBook(list, n, name).output();
    int p;
    cout<<"Enter page need to statistic: "; cin>>p;
    statistics(list, n, p);
    return 0;
}