//create structure statically in stack and accessed by pointer
#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r={10,5};
    struct rectangle *p;
    p=&r;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    r.length=12;
    cout<<r.length<<endl;
    (*p).length=14;
    cout<<(*p).length<<endl;
    p->length=16;
    cout<<p->length<<endl;
    p->breadth=6;
    cout<<p->breadth<<endl;
    return 0;
} 