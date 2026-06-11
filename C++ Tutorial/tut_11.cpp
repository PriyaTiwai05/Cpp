#include <iostream>
using namespace std;
//array
int main(){
    int marks[4]={34,56,78,98};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    //you can change the value of array
    
    marks[2]=95;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //using for loop
    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    //using while loop
    int i = 0;
    while (i<4)
    {
      cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
      i++;  
    }
    
    
    return 0;
}