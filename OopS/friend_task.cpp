#include <iostream>
using namespace std;
class Student{
    private:
    int marks;
    public:
    
    Student(int a){
        marks = a;
        
    }
    void showMarks(){
        cout<<" Marks is: "<<marks<<endl;
    }
    friend void Teacher(Student &s);
};
void Teacher(Student &s){
    s.marks = s.marks + 10;
}
    
int main(){
    Student S1(89);
    cout<<"befor marks update: "<<endl;
    S1.showMarks();
    Teacher(S1);
    cout<<"after marks update: "<<endl;
    S1.showMarks();
    return 0;
}