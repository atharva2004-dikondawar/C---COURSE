# include<iostream>
//there are two types of header files:
// 1. system header files: It comes with the compiler 
// ex:#include<iostream>
// 2. User defined header files : It is written by the programmer
// #include "this.h" //--> this will produce an error if this.h is not present in current directory  
// we can go to google and search [cpp reference for header file] to get more information about header files.
using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in c++"<<endl;
    cout<<"following are the types of operators in c++:"<<endl;
    //Arithmatic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    /* in a++ operator first a is printed as 4 but its value will be 5 as there is ++ then in next line 
    value of a that has become 5 by now will be printed but its value will become 4 as there is -- then
    in next line value of a will become 4+1 as there is ++ before a and now value of a which has became
    now is 5 will be printed then in next line its value will become 5-1 as there is -- before a and then
    the final value of a that will be 4 */
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    //Assignment operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='d';
     
    //Comparison operators 
    cout<<"following are the Comparision operators in c++:"<<endl;
    cout<<" The value of a == b is "<<(a==b)<<endl;
    cout<<" The value of a != b is "<<(a!=b)<<endl;
    cout<<" The value of a >= b is "<<(a>=b)<<endl;
    cout<<" The value of a <= b is "<<(a<=b)<<endl;
    cout<<" The value of a > b is "<<(a>b)<<endl;
    cout<<" The value of a < b is "<<(a<b)<<endl;
    cout<<endl;

    // Logical operators 
    cout<<"following are the logical operators in c++:"<<endl;
    cout<<" The value of ((a==b) && (a<b)) logical and operator is "<<((a==b) && (a<b))<<endl;
    cout<<" The value of ((a==b) || (a<b)) logical or operator is "<<((a==b) || (a<b))<<endl;   
    cout<<" The value of (!(a==b)) logical not operator is "<<(!(a==b))<<endl;   
    return 0;
}