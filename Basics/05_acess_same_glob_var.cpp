#include<iostream>
using namespace std;

int num = 99;

int main()
{
    int num = 9;
    cout<<"The value of num is: "<<num<<endl;
    cout<<"The value of num GLOBAL is: "<<::num<<endl<<endl; // Use '::' to acess global variable. If you are using same variable names

    return 0;
}