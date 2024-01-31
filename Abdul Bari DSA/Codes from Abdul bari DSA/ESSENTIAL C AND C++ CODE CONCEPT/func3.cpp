//call by address 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;

}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<"value of a and b is "<<a<<" and "<<b<<endl;
    return 0;
}