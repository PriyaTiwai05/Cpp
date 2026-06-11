#include <iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student::set_roll_number(int r){
    roll_number=r;
}
void student::get_roll_number(){
    cout<<"the roll no is "<<roll_number<<endl;
}
class Exam: public  student{
    protected:
    float maths;
    float physics;
public:
    void set_marks(float,float);
    void get_marks(void);

};
void Exam :: set_marks(float m1,float m2){
    maths = m1;
   physics = m2;
}
void Exam :: get_marks(){
    cout<<"marks is maths "<<maths<<endl;
    cout<<"marks is physics "<<physics<<endl;

}
class Result: public Exam{
    float percentage;
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"your percentage is "<<(maths+physics)/2<<endl;
    }
};

int main(){
    Result priya;
    priya.set_roll_number(2451);
    priya.set_marks(99.0,98.0);
    priya.display();

    return 0;
}