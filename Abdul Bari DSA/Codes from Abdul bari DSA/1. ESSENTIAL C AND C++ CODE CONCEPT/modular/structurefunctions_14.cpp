#include<iostream>
using namespace std;
struct rectangle{
    int l;
    int b;
};
void inhi(rectangle *p,int l1,int b1)
{
    p->l=l1;
    p->b=b1;
}
int area(rectangle r1)
{
    return r1.l*r1.b;
}
int peri(rectangle r1)
{
    return 2*(r1.l+r1.b);
}
int main()
{
    rectangle r={0,0};
    cout<<"enter length and bredth:";
    int l2,b2;
    cin>>l2>>b2;
    inhi(&r,l2,b2);
    int a=area(r);
    cout<<"area is "<<a<<endl;
    int p=peri(r);
    cout<<"perimeter is "<<p<<endl;
    return 0;
}