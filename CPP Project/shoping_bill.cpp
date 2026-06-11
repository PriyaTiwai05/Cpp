#include <iostream>
using namespace std;
class Billing{
    private:
    string Name_of_Product;
    float Price;
    int Quantity;
    float Total;
   
    public:
    void input(){
       cout<<"name of product "<<endl;
       cin>>Name_of_Product;
       cout<<"Price of product "<<endl;
       cin>>Price;
       cout<<"quantity of product "<<endl;
       cin>>Quantity;
       

       Total = Price*Quantity;
    }
    void Display(){
        cout<<"\n_______BILL_________"<<endl;
        cout<<"name: "<<Name_of_Product<<endl;
        cout<<"quantity: "<<Quantity<<endl;
        cout<<"price: "<<Price<<endl;
        

    }
    float getTotal(){
        return Total;
    }
};
    
int main(){
    int n;
    float grandTotal = 0;
    cout<<"How many product? ";
    cin>>n;
    Billing b[100];
    for (int i=0;i<n;i++){
        cout<<"\nProduct "<<i+1<<endl;
        b[i].input();
        grandTotal += b[i].getTotal();
    }
    cout<<"\n------ FINAL BILL----------\n";
    for(int i=0;i<n;i++){
        b[i].Display();
    }
    
    cout<<"\n GrandTotal = "<<grandTotal<<endl;
    float discount = 0;
    float finalAmount = grandTotal;
    if(grandTotal>=500 && grandTotal<1000){
        discount = grandTotal*0.10;
        finalAmount = grandTotal-discount;
        cout<<"Disconut(10%)="<<discount<<endl;

    }
    else if(grandTotal>=1000 && grandTotal<2000)
    {
        discount = grandTotal*0.15;
        finalAmount = grandTotal-discount;
        cout<<"Disconut(15%)="<<discount<<endl;
    }else if( grandTotal>=2000){
        discount = grandTotal*0.20;
        finalAmount = grandTotal-discount;
        cout<<"Disconut(20%)="<<discount<<endl;
    }
    
    cout<<"FINAL PAYABLE AMOUNT= "<<finalAmount<<endl;
    
    
    return 0;
}
