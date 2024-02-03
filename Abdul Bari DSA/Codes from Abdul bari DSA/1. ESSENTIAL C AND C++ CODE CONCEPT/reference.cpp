#include<iostream>
using namespace std;
int main()
{
    int a=10; // normal variable
    int &r=a;//reference variable(we must have inhitialize reference var while declaration)
    int *p;//pointer variable
    p=&a;
    a=35;
    int b=40;
    r=b;//here r is not reference to b here the value of  b goto r means a.
    cout<<a<<endl<<r<<endl<<*p; 
}