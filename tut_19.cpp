#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<"the sum of 4 & 7 is "<<sum(4,7)<<endl;
    cout<<"the sum of 4 & 7 & 8 is "<<sum(4,7,8)<<endl;

    return 0;
}