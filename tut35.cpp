#include <iostream>
using namespace std;
//VIRTUAL BASE
class student{
    protected:
    int roll_No;
    public:
    void set_number(int a){
        roll_No=a;
    }
    void print_number(void){
        cout<<"Your roll.No is "<<roll_No<<endl;
    }
};
class Test :virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"your result is here: "<<endl;
        <<"maths: "<<maths<<endl;
        <<"physics: "<<physics<<endl;
    }
    
};
class sports: virtual public student{
        protected:
        float score;
        public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout<<"your PT score is "<<score<<endl;
        }

    };
    class result:public Test, public Sports{
        private:
        float total;
        public:
        void display(void){
            total = maths+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }

    };

int main(){
    result priya;
    priya.set_number(2451);
    priya.set_marks(99.0,98,7);
    priya.set_score(10);
    priya.display();
    return 0;
}