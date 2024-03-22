#include<iostream>
#include<stdlib.h>
using namespace std;
struct rec{
    int l;
    int b;
};
int main()
{
    // int a=10;
    // int *p;
    // p=&a;
    // cout<<a<<endl<<&a<<endl<<p<<endl<<*p;

    int *q;
    // q=(int *)malloc(5*sizeof(int));
    q=new int[5];
    q[0]=90;
    // for(int i=1;i<5;i++)
    //     cin>>q[i];
    // cout<<q;
    // for(int i=0;i<5;i++)
    //     cout<<q[i];

    // int r[10]={2,4,6,8,10,12};
    // int *k=&r[0];
    // int *k=r;
    // for(int i=0;i<10;i++)
    //     cout<<k[i]<<endl;
    // free(p); //for c
    // delete p;
    delete[]q;

    int *a;
    char *b;
    string *c;
    float *d;
    double *e;
    long long *g;
    struct rec *h;
    cout<<sizeof(a)<<endl;//all type poointer takes 
                      //same amount of bytes 
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(g)<<endl;
    cout<<"struct takes also"<<sizeof(h)<<endl;

    return 0;
}