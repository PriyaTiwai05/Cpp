#include <iostream>
using namespace std;
//pointer
//specal variable that store address of other varable
int main(){
    int a = 10;
    cout<<&a<<endl;
    int b = 4;
    int *ptr=&b;
    //pointer to pointer
    int** ptr2 = &ptr;
    cout<<"adrress of b is "<<ptr<<endl;
    cout<<"adrress of b is "<<&b<<endl;
    cout<<"adrress of ptr is "<<&ptr<<endl;
    cout<<"adrress of ptr is "<<ptr2<<endl;
    //defrence operator
    cout<<"value of a is "<<*(&a)<<endl;
    cout<<"value of b is "<<*(ptr)<<endl;
    //null pointer
    

    return 0;
}