#include <iostream>
using namespace std;
union Student{
    int RollNo;
    float Persentage;
    char Name;
};
int main(){
  Student s1;
  s1.RollNo=451;
  s1.Persentage=98.7;
  cout<<"RollNO "<<s1.RollNo<<endl;
  cout<<"% "<<s1.Persentage<<endl;
    
return 0;
}