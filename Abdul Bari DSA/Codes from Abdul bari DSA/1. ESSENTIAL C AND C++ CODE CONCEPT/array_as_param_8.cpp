#include<iostream>
using namespace std;
void fun(int x[],int n)//taking param as arr (callby address)
{                       //and call by value both.//instead of <int x[]> we can use <int *x> also
    for(int i=0;i<n;i++)
        cout<<x[i]<<"   ";
    x[0]=25;
    cout<<endl;
}
int* fun2(int n)//return array (return address)
 {
    int *p1;
    p1=new int[n];
    p1[0]=90;
    return p1;

 }
int main()
{
    int a[5]={2,4,6,8,10};
    int n=5;
    fun(a,n);
    cout<<endl<<a[0];
    int *p;
    p=fun2(5);
    cout<<endl<<p[0];
    return 0;
}