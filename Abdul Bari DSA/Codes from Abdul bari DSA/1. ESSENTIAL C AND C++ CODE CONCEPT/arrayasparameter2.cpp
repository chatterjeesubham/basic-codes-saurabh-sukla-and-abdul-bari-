//returning array as a pointer in a function 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int * fun(int n){
    //int *p= new int[n];
    int *p=(int*)malloc(n*sizeof(int));
    p[0]=2;
    return p;
    delete[]p;
}
int main()
{   
    int *A;
    A=fun(5);
    cout<<A[0];
    return 0;
}