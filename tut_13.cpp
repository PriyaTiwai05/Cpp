/*#include <iostream>
using namespace std;
struct employee
{
    int eID;
    char favChar;
    float salary;

};
int main(){
    struct employee priya;
    
    priya.eID=2451;

    priya.favChar= 'p';
    priya.salary=12000000;
    
    cout<<"This is " <<priya.eID<<endl;
    cout<<"This is " <<priya.favChar<<endl;
    cout<<"This is " <<priya.salary<<endl;
return 0;
}*/

#include <iostream>
using namespace std;

typedef struct employee
{
    int eID;
    char favChar;
    float salary;

}ep;
int main(){
     ep priya;
    
    priya.eID=2451;
    priya.favChar= 'p';
    priya.salary=12000000;
    
    cout<<"This is " <<priya.eID<<endl;
    cout<<"This is " <<priya.favChar<<endl;
    cout<<"This is " <<priya.salary<<endl;
    
    return 0;
}