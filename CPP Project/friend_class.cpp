#include <iostream>
using namespace std;

class student
{
private:
    int marks;
public:
    student(int m){
       marks = m; 

    }
    friend class Teacher;
};
class Teacher{
    public:
    void showMarks(student s){
        cout<<"Marks: "<<s.marks<<
        endl;
    }
};
int main(){
  student s1(90);
  Teacher t1;
  t1.showMarks(s1);
    return 0;
}