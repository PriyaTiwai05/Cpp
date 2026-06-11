#include <iostream>
using namespace std;
class Person{
    public:
    string name;
};
class student : public Person{
public:
   int roll;
   void display(){
    cout<<"NAME: "<<name<<endl;
    cout<<"Rollno: "<<roll<<endl;

   }
};
int main(){
    student s;
    s.name="Priya";
    s.roll=2451;
    s.display();
    return 0;
}