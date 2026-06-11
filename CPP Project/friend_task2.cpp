#include <iostream>
using namespace std;
class Box{
    private: 
    int Length;
    public:
    Box(int l){
        Length = l;
    }
    void showLenght(){
        cout<<"Lenght: "<<Length<<endl;
    }
    friend void doubleLength(Box &b);
};
void doubleLength(Box &b){
    b.Length = 2*b.Length;
}
int main(){
    Box b(7);
    cout<<"Before update: "<<endl;
    b.showLenght();
    doubleLength(b);
    cout<<"After update: "<<endl;
    b.showLenght();
    return 0;
}