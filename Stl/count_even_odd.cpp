#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v= {1,2,3,4,5,6};
    int even = 0,odd = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
cout<<even<<" ";
cout<<odd<<" ";
    return 0;
}