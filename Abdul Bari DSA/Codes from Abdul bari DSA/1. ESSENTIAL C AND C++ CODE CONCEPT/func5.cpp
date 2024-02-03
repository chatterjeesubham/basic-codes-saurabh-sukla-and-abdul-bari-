//using call by address and call by value in same function parameter
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
    int add(int,int);
    int add(int *p,int q){
     return (*p+q);
    }
int main(){
    int p,j;
    cin>>p>>j;
    cout<<add(&p,j);
    return 0;
}
