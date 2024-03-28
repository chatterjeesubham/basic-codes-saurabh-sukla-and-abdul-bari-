#include<iostream>
using namespace std;
class rectangle{
    public:
        int l;
        int b;

void inhi(int l1,int b1)
{
    l=l1;
    b=b1;
}
int area()
{
    return l*b;
}
int peri()
{
    return 2*(l+b);
}
};
int main()
{
    rectangle r;
    cout<<"enter length and bredth:";
    int l2,b2;
    cin>>l2>>b2;
    r.inhi(l2,b2);
    int a=r.area();
    cout<<"area is "<<a<<endl;
    int p=r.peri();
    cout<<"perimeter is "<<p<<endl;
    return 0;
}