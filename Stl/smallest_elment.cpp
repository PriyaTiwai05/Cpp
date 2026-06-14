#include <iostream>
#include <vector>
using namespace std;
int smallestElement(vector<int> num){
    int n = num.size();
    int le = INT16_MAX;
    
    for( int val: num){
        if(val<le){
          le = val; 
        }

    }
 return le;   
}
int main(){
 vector<int> num={5, 9, 2, 15, 7};
 cout<<smallestElement(num)  ;
    return 0;
}