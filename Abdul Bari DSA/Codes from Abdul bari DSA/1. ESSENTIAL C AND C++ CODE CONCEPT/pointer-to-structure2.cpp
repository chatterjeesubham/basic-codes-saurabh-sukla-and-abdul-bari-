//create a structure dynamically in heap and accessed by a pointer
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle *p;
    //p=(struct rectangle*)malloc(sizeof(struct rectangle)); style in c
    //p=new struct rectangle; style in c++
    p=new rectangle;        //style in c++
    p->length=10;
    p->breadth=5;
    cout<<p->length<<endl<<p->breadth;
    return 0;
}