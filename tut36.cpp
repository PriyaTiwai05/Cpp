#include <iostream>
using namespace std;
//intitalization list in constructor
class test
{
    int a;
    int b;
    public:
    //test(int i, int j):a(i), b(j)
    //test(int i, int j):a(i), b(i+j)
    //test(int i, int j):a(i), b(j*2)
    test(int i, int j):a(i), b(a+j)
    {
        cout<<"constructor executed"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};
int main(){
    test t(9,10);
    return 0;
}