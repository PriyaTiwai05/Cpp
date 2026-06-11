#include <iostream>
using namespace std;
template <class T>
T add(T A, T B){
return A+B;
}
int main(){
    cout<<"INt "<<add(2,3)<<endl;
    cout<<"Float "<<add(2.5,3.7)<<endl;
    cout<<"Double "<<add(2.78,3.9887)<<endl;
    
    return 0;
}