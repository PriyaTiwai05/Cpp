#include <iostream>
using namespace std;
class student{
    private:
     int marks;
     public:
     student(int m){
     marks = m;
}
friend void showMarks(student s);
};
void showMarks(student s){
    cout<<"marks= "<<s.marks<<endl;
}
int main(){
    student s1(90);
    showMarks(s1);
    return 0;
}