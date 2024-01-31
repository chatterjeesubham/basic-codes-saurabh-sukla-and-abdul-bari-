#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int add(int a,int b)
{ 
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=add(a,b);
    cout<<c<<endl;
    return 0;
}