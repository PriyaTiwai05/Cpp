#include <iostream>
using namespace std;
class Employee{
    public:
    int IdNo;
    int Salary;
    string Name;
    Employee(int a, int b, string m){
        IdNo = a; 
        Salary = b;
        Name = m;
    }
    void Display(void){
    cout<<"Name of Employee is "<<Name<<endl;
    cout<<"salary of Employee is "<<Salary<<endl;
    cout<<"id of Employee is "<<IdNo<<endl;
   }
    void CalculateGrade(){
    if (Salary >= 5400000)
        cout<<"Your Grade  is A "<<endl;
    else if(Salary < 3000000 && Salary >= 2000000) 
         cout<<"Your Grade is B "<<endl;
    else if(Salary < 2000000 && Salary >=1000000)
         cout<<"Your Grade is C "<<endl;
    else
        cout<<"You are Fail "<<endl;
    }

};

int main(){
    Employee E1(2451,5000000,"Priya");
    Employee E2(2443,2000000,"Khushbu");
    E1.Display();
    E1.CalculateGrade();
    E2.Display();
     E2.CalculateGrade();
    return 0;
}