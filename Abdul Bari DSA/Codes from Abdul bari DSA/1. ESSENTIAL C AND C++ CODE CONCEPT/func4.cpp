//call by reference
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void swap(int &p,int &q)
{
    int temp=p;
    p=q;
    q=temp; 

}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"value of a and b is "<<a<<" and "<<b<<endl;
    return 0;
}