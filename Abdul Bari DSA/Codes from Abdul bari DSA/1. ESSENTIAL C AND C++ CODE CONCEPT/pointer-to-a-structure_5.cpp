#include<iostream>
#include<stdlib.h>
using namespace std;
struct rec{
    int l;
    int b;
};
int main()
{
    // struct rec r;
    // r.l=10;
    // r.b=5;
    // cout<< r.l<<endl<<r.b<<endl; 
    // struct rec *p;
    // p=&r;
    // (*p).l=20;
    // p->b=50;
    // cout<< r.l<<endl<<r.b; 

    // rec *p1=&r;
    // p1->l=20;
    // p1->b=40;
    // cout<<p1->l<<endl<<p1->b<<endl;

    struct rec *p=(struct rec *)malloc(sizeof(struct rec)); //c style
    rec *p2;
    p2=new struct rec; //cpp style
    rec *p1=new rec;     //cpp style
    p1 -> l=5;
    p1 -> b=10;
   cout<<p1->l<<endl<<p1->b<<endl;
    return 0;
}