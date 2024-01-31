#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle
{
    int breadth;
    int length;
}r3;
    struct Rectangle r1;
int main()
{
    struct Rectangle r2={4,8};
    cout<<sizeof(r2)<<endl;
    cout<<r2.breadth<<"\n"<<r2.length<<endl;
    r1.length=5;
    r1.breadth=2;
    cout<<r1.length<<"\t"<<r1.breadth<<endl;
    r3.length=9;
    r3.breadth=3;    
    cout<<r3.length<<"\t"<<r3.breadth<<endl;

    return 0;
}