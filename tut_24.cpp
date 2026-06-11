#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;
    }
    friend complex SumComplex(complex o1,complex o2);
    void PrintNUmber(){
        cout<<"your number is "<<a<<" + "<<b<<" i "<<endl;
    }
};
complex SumComplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2, sum;
    c1.setNumber(3,6);
    c1.PrintNUmber();
    c2.setNumber(3,6);
    c2.PrintNUmber();
    sum=SumComplex(c1,c2);
    sum.PrintNUmber();
    return 0;
}