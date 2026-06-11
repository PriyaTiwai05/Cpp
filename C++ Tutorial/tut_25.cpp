#include <iostream>
using namespace std;
class complex;//forward declaration
class calculator{
    public:
    int add(int a, int b){
        return(a+b);
    }
    int sumRealComplex(complex,complex);
};
class complex{
    int a,b;
    friend int calculator :: sumRealComplex(complex,complex);
    public:
     void setNumber(int n1,int n2){
        a = n1;
        b = n2;
     }
     void printNumber(){
        cout<<"your no is "<<a<<" + "<<b<<" i "<<endl;
     }
};
int calculator :: sumRealComplex(complex o1, complex o2){
    return(o1.a + o2.a);
}
int main(){
  complex o1, o2;
  o1.setNumber(1,9);
  o2.setNumber(5,7) ;
  calculator calc;
   int res = calc.sumRealComplex(o1,o2);
   cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    return 0;
}