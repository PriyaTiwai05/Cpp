#include <iostream>
using namespace std;
float moneyRecived(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}
int main(){
    int money = 100000;
    cout<<"If you have " <<money<<"Rs in your account, you will recive "<<moneyRecived(money)<<"Rs in your account"<<endl;
    cout<<"For VIP ,If you have " <<money<<"Rs in your account, you will recive "<<moneyRecived(money,1.1)<<"Rs in your account";
    return 0;
}