#include<iostream>
using namespace std;
void swap(int *a,int *b)//passing by address
{
    int t=*a;
    *a=*b;
    *b=t;
}
void swap1(int &a,int &b)//passing by reference
{
    int t=a;
    a=b;
    b=t;
}
void swap2(int &a,int *b)//combo of passing by address and passing by reference
{
    int t=a;
    a=*b;
    *b=t;
}
int main()
{
    int x=3,y=4;
    // swap(&x,&y);
    // swap1(x,y);
    swap2(x,&y);
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y;
    return 0;
}