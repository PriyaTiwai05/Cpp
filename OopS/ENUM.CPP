#include <iostream>
using namespace std;
enum TrafficLight{
    Red,
    Green,
    Yellow,
};
int main(){
    TrafficLight signal;
    int choice;

    cout<<"color: "<<endl;
    cin>>choice;
    signal=TrafficLight(choice);
    if (signal==Red){
        cout<<"Stop!";
    }
    else if (signal==Yellow)
    {
        cout<<"Ready to stop";
    }
    else{
        cout<<"go";
    }
    
    return 0;
}