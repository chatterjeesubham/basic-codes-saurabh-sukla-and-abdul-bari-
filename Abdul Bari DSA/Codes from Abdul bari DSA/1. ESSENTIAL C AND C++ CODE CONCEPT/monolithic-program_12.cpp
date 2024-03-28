#include<iostream>
using namespace std;
int main()
{
    int l=0,b=0;
    cout<<"enter length and bredth:";
    cin>>l>>b;
    int a=l*b;
    cout<<"area is "<<a<<endl;
    int p=2*(l+b);
    cout<<"perimeter is "<<p<<endl;
    return 0;
}