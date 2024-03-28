#include<iostream>
using namespace std;
struct rectangle{
    int l;
    int b;
};
void inhitialize(struct rectangle *p,int l,int b)
{
    p->l=l;
    p->b=b;
}
int area(struct rectangle r1)
{
    return r1.l*r1.b;
}
void changelen(struct rectangle *p,int l)
{
    p->l=l;
}
int main()
{
    // struct rectangle r;  or,
    rectangle r;

    inhitialize(&r,5,8);
    cout<<r.l<<endl<<r.b<<endl;
    cout<<area(r)<<endl;
    changelen(&r,6);
    cout<<r.l<<endl;

    return 0;
}