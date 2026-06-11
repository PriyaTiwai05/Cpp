#include <iostream>
using namespace std;
class Employe{
    public:
    int id;
    float salary;
    Employe(int inpId){
        id= inpId;
        salary = 34.0;
    }
    Employe(){}
};
class Programmer : Employe{
    public:
    Programmer(int inpId){
        id=inpId;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<endl;
    }
};
int main(){
    Employe harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    return 0;
}