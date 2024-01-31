#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int a=10;
    int *p=&a; //pointer declaration and declaration while inhitialization
    //p=&a; //inhitialization
    cout<<"value of a: "<<a<<endl;
    cout<<"value of *p: "<<*p<<endl;
    int A[5]={2,4,6,8,10};
    int *p1;// pointer declaration
    p1=A; //inhitialization array of pointer
    //p1=&A[0]; --another method of inhitialization
    for(int i=0;i<5;i++)
    {
        cout<<p1[i]<<endl;
    }
    return 0;
}