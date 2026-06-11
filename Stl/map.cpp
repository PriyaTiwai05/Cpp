#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <stack>
//#include <queue>
#include <map>
using namespace std;
int main(){
 map<string,int> m;

 m["tv"] =20; 
 m["phone"] =50; 
 m["headphone"] =3; 
 m["earbud"] =10; 
 m["charger"] =2; 

 for(auto p:m){
    cout<<p.first<<" "<<p.second<<endl;
 }
 cout<<"count = "<<m.count("laptop")<<endl;
    return 0;
}