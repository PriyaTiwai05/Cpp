#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int*p;
    p = new int;
    *p = 25;
    cout<<"value: "<<*p<<endl;
    delete p;
    
    return 0;
}