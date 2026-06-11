#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age   "<<endl;
    cin>>age;
    if(age<18){
        cout<<"you can not allow to my party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
return 0;
}
