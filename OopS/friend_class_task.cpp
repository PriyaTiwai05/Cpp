/*#include <iostream>
using namespace std;
class BankAccount{
    private:
    int balance;
    public:
    BankAccount(int b){
        balance = b;
    }
 friend class BankManager;  
};
class BankManager{
    public:
    void showBalance(BankAccount b){
        cout<<"current amount: "<<b.balance<<endl;
    }
    void addBonus(BankAccount &b,int bouns){
        b.balance = b.balance + bouns;
        cout<<"Bouns Added successfully"<<endl;
    }
};
int main(){
    BankAccount acc1(1000000);
    BankManager manager;
    manager.showBalance(acc1);
    manager.addBonus(acc1,100000);
    manager.showBalance(acc1);
    return 0;
}*/
#include <iostream>
using namespace std;
class AreaCalculator;
class Rectangle{
    private:
    int length;
    int width;
    public:
    Rectangle(int l,int w){
        length = l;
        width = w;
    }
    friend class AreaCalculator;
};
class AreaCalculator{
    public:
void calculateArea(Rectangle &r){
   int Area = r.length*r.width;
cout<<"AREA IS : "<<Area<<endl;
    }
};
int main(){
    Rectangle rect1(7,9);
    AreaCalculator calc;
    calc.calculateArea(rect1);
    return 0;
}