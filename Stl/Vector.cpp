#include <iostream>
#include<vector>
using namespace std;

int main(){
    
vector<int> vec;
vec.push_back(10) ;
vec.push_back(20) ;
vec.push_back(30) ;
vec.push_back(40) ;
//range based loop
for(int num:vec){
    cout<<num<<" ";
}
cout<<endl;
//normal loop
for(int i = 0;i<vec.size();i++){
    cout<<"index "<<i<<" value "<<vec[i];
}
    return 0;
}