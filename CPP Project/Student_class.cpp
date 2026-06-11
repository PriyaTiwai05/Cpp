#include <iostream>
using namespace std;
class Student{
public:
int Marks;
int RollNo;

 void Card(void){
    cout<<"Enter Marks: ";
    cin>>Marks;
    cout<<"Enter RollNo: ";
    cin>>RollNo;
}

void Display(void){
    cout<<"Marks of student is "<<Marks<<endl;
    cout<<"Rollno. of student is "<<RollNo<<endl;
}
void CalculateGrade(void){
    if(Marks >= 80){
        cout<<"Your Grade is A"<<endl;
    }
     else if (Marks <= 80 && Marks >=50)
     {
        cout<<"Your Grade is B"<<endl;
     }
      
    else
    {
        cout<<"Your Grade in F"<<endl;
    }
     
    
}
};
int main(){
 Student Priya,Khushbu;
 Priya.Card();
 Priya.Display();
 Priya.CalculateGrade();
Khushbu.Card();
Khushbu.Display();
Khushbu.CalculateGrade();
    return 0;
}