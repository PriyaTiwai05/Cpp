#include <iostream>
using namespace std;
class student{
public:
   int Marks;
   int  RollNo;
   string Name;
   student(){ //CONSTRUCTOR
    cout<<"Enter Marks: "<<endl;
    cin>>Marks;
    cout<<"Enter RollNo: "<<endl;
    cin>>RollNo;
    cout<<"Enter Name: "<<endl;
    cin>>Name;
   }
   void Display(void){
    cout<<"Name of student is "<<Name<<endl;
    cout<<"Marks of student is "<<Marks<<endl;
    cout<<"RollNo of student is "<<RollNo<<endl;
   }
   
  void CalculateGrade(){
    if (Marks >= 80)
        cout<<"Your Grade  is A "<<endl;
    else if(Marks < 80 && Marks >= 60) 
         cout<<"Your Grade is B "<<endl;
    else if(Marks < 60 && Marks >=30)
         cout<<"Your Grade is C "<<endl;
    else
        cout<<"You are Fail "<<endl;
    }
};
int main(){
    student *ptr=new student();
   // student *ptr=&Priya;
    ptr->Display();
    (*ptr).CalculateGrade();
    student Khushbu;
    Khushbu.Display();
    Khushbu.CalculateGrade();
    return 0;
}