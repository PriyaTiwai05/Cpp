/*#include <iostream>
using namespace std;
//call by refrence using pointer 
 void swapPointer(int* a, int* b){
int temp = *a;
 *a = *b;
 *b = temp;
 }
 


int main(){
    int x = 6, y = 8;
    cout<<"The value of x is "<<x<< " the value of y is "<<y<<endl;
    swapPointer(&x,&y);
    cout<<"The value of x is "<<x<< " the value of y is "<<y<<endl;

    
    return 0;
}*/


#include <iostream>
using namespace std;
//call by refrence variable 
void swapRefrencevar(int &a, int &b){
int temp = a;
 a = b;
 b = temp;
 }
 


int main(){
    int x = 6, y = 8;
    cout<<"The value of x is "<<x<< " the value of y is "<<y<<endl;
    swapRefrencevar(x,y);
    cout<<"The value of x is "<<x<< " the value of y is "<<y<<endl;

    
    
    return 0;
}
