#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}epdt;

union money 
{
    /* data */
    int rice;
    char car;
    float pound;
};

int main(){
    // enum meal{ breakfast, launch, dinner};
    // meal m1 = breakfast;
    // cout<<m1<<endl;
    // cout<<(m1==0);
    // cout<<breakfast;
    // cout<<launch;
    // cout<<dinner;

    // union money m1;
    // m1.rice =34;
    // m1.car = 'c';
    // m1.pound = 12.5;
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;
    // cout<<m1.pound<<endl;

    // epdt atharva;
    // struct employee Shubham;
    // struct employee Rohan;
    // atharva.eId = 1;
    // atharva.favChar = 'c';
    // atharva.salary = 120000000;
    // cout<<"The value is "<<atharva.eId<<endl;
    // cout<<"The value is "<<atharva.favChar<<endl;
    // cout<<"The value is "<<atharva.salary<<endl;
    return 0;
}