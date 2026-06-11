#include <iostream>
#include <vector>
using namespace std;




int main(){
    vector<int> vec;
 vec.push_back(1);
 vec.push_back(2);
 vec.push_back(3);
 vec.push_back(4);
 vec.push_back(5);
 vec.emplace_back(6);
vec.pop_back();
 for(int val : vec){
    cout<<val<<" ";
 }
cout<<endl;
cout<<"val at idx 2 = "<<vec[2]<<endl;
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;   
cout<<"front "<<vec.front()<<endl;
cout<<"back "<<vec.back()<<endl;



vector<int> vec1 = {6,7,8,9};
   for(int val1 : vec1){
    cout<<val1<<" ";
 }
 cout<<endl;

 vector<int> vec2 (3,1);
   for(int val2 : vec2){
    cout<<val2<<" ";
 }
 cout<<endl;
//Erase element from any index
 vector<int> vec3 = {6,7,8,9};
 vec3.erase(vec3.begin()+2);
   for(int val3 : vec3){
    cout<<val3<<" ";
 }
 cout<<endl;
  

    return 0;
}