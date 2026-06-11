#include <iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){}//Default constructor
    Number(int num){
        a = num;
    }
    Number(Number &obj){
        cout<<"Your Copy Constructot Is Called!!!!"<<endl;
        a = obj.a;
    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main(){
 Number x,y(4),z(45);
 x.display();
 y.display();
 z.display();
 Number z1(x);
 z1.display();


    return 0;
}