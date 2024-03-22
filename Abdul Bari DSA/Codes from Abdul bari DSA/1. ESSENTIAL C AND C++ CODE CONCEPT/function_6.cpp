#include<iostream>
using namespace std;
int add(int a,int b) //passing by value
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int x=3,y=4;
    int z=add(x,y);
    cout<<z;

    return 0;
}