#include<iostream>
using namespace std;
double tay(int x,int n)//optimal recursion code 
{                       //for taylor series
    static double s=1;
    if(n==0)
        return s;
    else{
        s=1+x*s/n;
        return tay(x,n-1);
    }
}
//iterative method--2.7182--1,10
double tay1(int x,int n)
{
    double s=1;
    for(;n>0;n--)
    {
        s=1+x*s/n;
    }
    return s;
}
int main()
{
    cout<<tay1(1,10);

    return 0;
}
