#include <iostream>
using namespace std;
void swapValue(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
   int x = 10;
   int y = 20;
   cout<<"BEFORE SWAP THE VALUE : "<<x <<"&" <<y<<endl;
   swapValue(&x,&y);
   cout<<"after SWAP THE VALUE : "<<x <<"&" <<y<<endl;
    return 0;
}