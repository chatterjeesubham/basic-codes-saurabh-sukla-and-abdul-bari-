#include<iostream>
using namespace std;
struct rec{
    int l;
    int b;
};
int area(struct rec r1)//call by value struct
{
    return r1.l*r1.b;
}
int perimeter(struct rec &r1)//call by reference struct
{
    int p= 2*(r1.l+r1.b);
    // r1.l=8;
    return p;
}
void changelen(struct rec *p,int l)//call by address struct
{
    p->l=l;
}
struct test{
    int a[5];
    int n;
};
void fun(struct test t1,int n)//t1 takes as call by value as its array inside structure
{                              //but if its only array its takes as value as address
    t1.a[0]=n;
    for(int i=0;i<5;i++)
        cout<<t1.a[i]<<endl;   
}
struct rec* fun1()
{
    struct rec *p=new rec;
    p->l=15;
    p->b=7;
    return p;
}
int main()
{
    // struct rec r;
    // r.l=5;
    // r.b=10;
    // changelen(&r,8);
    // cout<<r.l;
    // struct test t={{2,5,6,8,10},7};
    // fun(t,10);
    // cout<<endl; 
    // for(int i=0;i<5;i++)
    //     cout<<t.a[i]<<endl;
    struct rec *p2=fun1();
    cout<<p2->l<<endl<<p2->b<<endl;
    return 0;
}