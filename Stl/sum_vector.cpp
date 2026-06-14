#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sum=0;
vector<int>  v={1,2,3,4,5};
for(int num:v){
    cout<<num<<" ";
    sum+=num;
}
cout<<endl;
cout<<sum<<" " ; 
    return 0;
}