#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 34 , b = 44;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // cout<<"THE VALUE OF a IS: "<<a<<b<<endl;

    // *****constants in C++*******
    //  const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    //  a = 45;  //YOU WILL GET AN ERROR BECAUSE a is a constant
    // cout<<"THE VALUE OF a IS: "<<a<<endl;
   
    // ********* MANIPULATORS IN C++ ************
    // int a=3,b=78,c=1233;
    // cout<<"The value of a without setw is:"<<a<<endl;
    // cout<<"The value of b without setw is:"<<b<<endl;
    // cout<<"The value of c without setw is:"<<c<<endl;

    // cout<<"The value of a is:"<<setw(2)<<a<<endl;
    // cout<<"The value of b is:"<<setw(3)<<b<<endl;
    // cout<<"The value of c is:"<<setw(4)<<c<<endl;
    
    // ********** OPERATOR PRECEDENCE **********
    int a=3,b=4;
    int c=((a*b)+b);
    // int c=((((a*5)+b)-45)+87);
    cout<<c;

    return 0;

    }