#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int* p = &x;
    int **ptr=&p;
    cout<<**ptr;
    return 0;
}