//getting variable inside heap using pointer
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main()
{
    int *p;
    //p=(int*)malloc(5*sizeof(int)); //for c
    p=new int[5];
    p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    //free(p); deallocation for c
    delete[]p;
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;
    cout<<"sizes:"<<endl;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    return 0;
}