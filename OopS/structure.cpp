#include <iostream>
using namespace std;
typedef struct stuent
    {
int  rollno;
string  name;
float prcentage;
}St;
int main(){
   St Priya;
    Priya.rollno= 2451;
    Priya.prcentage=98.9;
cout<<"Priya's rollno. is: "<<Priya.rollno<<endl;
cout<<"Priya's percentage is: "<<Priya.prcentage<<endl;

    return 0;
}