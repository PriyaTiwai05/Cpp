#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator{
    int a,b;
    public:
    void getData(){
        cout<<"enter the value of a: "<<endl;
        cin>>a;
        cout<<"enter the value of b: "<<endl;
        cin>>b;

    }
    void performOperation(){
        cout<<"the value of a+b is "<<a+b<<endl;
        cout<<"the value of a-b is "<<a-b<<endl;
        cout<<"the value of a*b is "<<a*b<<endl;
        cout<<"the value of a/b is "<<a/b<<endl;
    }
};

class ScientificCalculator{
int a,b;
    public:
    void getData(){
        cout<<"enter the value of a: "<<endl;
        cin>>a;
        cout<<"enter the value of b: "<<endl;
        cin>>b;

    }
    void performOperation(){
        cout<<"the value of cos(a+b) is "<<cos(a+b)<<endl;
        cout<<"the value of cos(a-b) "<<cos(a-b)<<endl;
        cout<<"the value of sin(a+b) is "<<sin(a+b)<<endl;
        cout<<"the value of sin(a-b) is "<<sin(a-b)<<endl;
    }
};
int main(){
    SimpleCalculator calc;
    calc.getData();
    calc.performOperation();
    ScientificCalculator cal;
    cal.getData();
    cal.performOperation();
    return 0;
}