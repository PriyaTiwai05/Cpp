#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec ={1,2,3,4,5};

    //forward iterator
    vector <int> :: iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
       cout<<*(it)<<" ";
    }
    cout<<endl;

    //reverse iterator

     vector <int> ::reverse_iterator it;
    for(it = vec.rbegin(); it != vec.rend(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //for reverse iterator simple way
    for(auto it = vec.rbegin(); it! vec.rend(); it++)

    return 0;
}