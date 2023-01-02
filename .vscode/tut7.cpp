#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<" tell me your age "<<endl;
    cin>>age;

    // (1.) ***selection control structure: If else-if else ladder***

    // if((age<18) && (age>0)){
    //     cout<<"you can not come to my party"<<endl;
    // } 
    // else if (age==18){
    //     cout<<"you are a kid and you will get pass to the party"<<endl;
    // }
    // else if (age<1){
    //     cout<<"you are not born yet"<<endl;
    // }
    // else{
    //     cout<<"you can come to my party"<<endl;
    // }
    
    // (2.) ***selection control structure: switch case statements.***
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 2:
        cout<<"you are 2"<<endl;
        break;
    
    default:
    cout<<"no special cases"<<endl;
        break;
    }
    
    cout<<"done with switch case statement";
        return 0;
}
