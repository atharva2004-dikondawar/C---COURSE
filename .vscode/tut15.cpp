#include<iostream>
using namespace std;

 int product(int a,int b){
    return a*b;
}

float moneyReceived(int currentMoney ,float factor=1.04){
    return currentMoney * factor;
}

// int strlen(const char *p){

// }
int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<"."<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money,1.04)
    <<"Rs after 1 year"<<endl;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)
    <<"Rs after 1 year";
   

    return 0;
}