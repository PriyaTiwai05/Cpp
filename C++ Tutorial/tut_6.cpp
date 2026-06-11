#include <iostream>n
using namespace std;
int main(){
    const int a = 33;
    cout<<"The value of a was "<<a<<endl;
    //a = 66; error because a is constant
    cout<<"the value of a is "<<a;
    return 0;
}