#include <iostream>
#include <vector>
using namespace std;
int countOccurance(vector<int> v){
int count = 0;
    for(int num:v){
        if(num==1){
           count ++;
        }
       
    }
    return count; 
}
int main(){
    vector<int> v={1,1,2,3,1,4,1};
   
    cout<<countOccurance(v)<<" ";
    return 0;
}