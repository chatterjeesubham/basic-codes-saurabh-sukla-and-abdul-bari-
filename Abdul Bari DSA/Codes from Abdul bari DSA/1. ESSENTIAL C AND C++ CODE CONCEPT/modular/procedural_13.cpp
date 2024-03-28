#include<iostream>
using namespace std;
int area(int l,int b)
{
    return l*b;
}
int peri(int l,int b)
{
    return 2*(l+b);
}
int main()
{
    int l=0,b=0;
    cout<<"enter length and bredth:";
    cin>>l>>b;
    int a=area(l,b);
    cout<<"area is "<<a<<endl;
    int p=peri(l,b);
    cout<<"perimeter is "<<p<<endl;
    return 0;
}