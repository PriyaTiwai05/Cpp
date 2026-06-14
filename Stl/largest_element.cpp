#include <iostream>
#include <vector>
using namespace std;
int largestElement(vector<int> num){
    int n = num.size();
    int le = num[0];
    
    for( int val: num){
        if(val>le){
          le = val; 
        }

    }
 return le;   
}
int main(){
 vector<int> num={5, 9, 2, 15, 7};
 cout<<largestElement(num)  ;
    return 0;
}