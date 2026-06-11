#include <iostream>
using namespace std;
class Student{
private:
string Name;
public:
void PrintName(){
    cout<<"Enter name of student"<<endl;
    cin>>Name;
}
void DisplayName(){
    cout<<"Name: "<<Name;
}

};
class Marks : public Student
{
    
public:
int Marks;
void PrintMarks(){
    cout<<"Enter Marks of student"<<endl;
    cin>>Marks;
}
void DisplayMarks(){
    cout<<"Marks: "<<Marks;
}
};
class Percentage : public Marks
{
public:
float Percentage;
void Calculate(){
    Percentage = (Marks/100)*100;
}

void DisplayPercentage(){
    cout<<"Percentage: "<<Percentage;
    
}

}
;



int main(){
   Percentage P1;
   P1.DisplayName() ;
   P1.DisplayMarks();
   P1.DisplayPercentage();
    return 0;
}