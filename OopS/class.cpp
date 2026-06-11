#include <iostream>
using namespace std;
class Student{
    private:
    int marks;
    int RollNo;
    public:
    void Std(int a, int b){
    a = marks;
    b = RollNo;
    }
    void SetData(){
        cout<<"Enter the student marks"<<marks<<endl;
    
        cout<<"Enter the student RollNo"<<RollNo<<endl;
    }

    
};
int main(){
    Student s1;
    s1.Std(45,220);
    s1.SetData();
    return 0;
}