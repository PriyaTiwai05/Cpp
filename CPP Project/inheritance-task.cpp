#include <iostream>
using namespace std;
class Shape{
    public:
    void Print(){
        cout<<"CALCULATING AREA"<<endl;
    }
};
class Rectange :public Shape{
    public:
    int l;
    int b;
    int r;
 void getDataRectangle(){
        cout<<"Enter the value of length "<<endl;
        cin>>l;
        cout<<"Enter the value of breadth "<<endl;
        cin>>b;
        }
void DisplayRectangle(){
        cout<<"Area of rectangle"<<l*b<<endl;
    }
};
class Circle :public Shape{
    int r;
    public :
    void getDatacircle(){
        cout<<"Enter the value of radius "<<endl;
        cin>>r;
}
    void DisplayCircle(){
        cout<<"Area of circle"<<r*r*3.14<<endl;
    }
};
int main(){
    Rectange R1;
    R1.Print();
    R1.getDataRectangle();
    R1.DisplayRectangle();
    
   Circle C1;
   C1.Print();
   C1.getDatacircle();
   C1.DisplayCircle();

return 0;
}