# include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
/*this program will start execution from "int main" then it will consider integer variable is 9 but then as given "glo=78" it will
update 9 to 78 then it will consider some variables then it will call "sum()" which will take the execution directly up to
 "void sum()" and it consider "int a" but as there is no value of "a" is given in "void sum()" it will not print 'a' then it will 
 call "cout<<glo" it will consider global variable glo = 6 as there is no local variable for glo it will print '6' and after 
 complieting the execution of void sum() function it will go again to int main() function and will start execution from 
 "cout<<glo" as it has completed execution till sum() before so now it find value of 'glo' in local variable in int main() function 
 as there is glo=9 and then it is updated to 78 it will print 78. "therefore the output will be 678 for this whole program ". */ 

/*the program will prioritize local variable rather than considering global variable .for example = In this program 'int c=12' is a
 global variable and 'int c=13' is a local variable therefore it will consider 'c=13' instead of 'c=12' */

//  '\n' is used to break a continious line
/* to copy a line in vscode first select the
 line and then press 'ctrl+D' */ 

int c=12;
int main(){
    int glo = 9;
    glo = 78;
    // int a = 2;
    // int b = 1;
    int a=14,b=15,c=13; 
    float pi=3.14;
    char y= 'u';
    bool is_true = true;
    bool is_false = false;
    sum();
    cout<<glo<<is_true<<is_false;
    // in bool variable true will prin 1 and false will print 0 
    // cout<<" this no is "<<a<<", and b is "
    // <<b<<" and c is "<<c<<"\n the value pi is "
    // <<pi;
    // cout<<" the value is "<<y;
    return 0;
}