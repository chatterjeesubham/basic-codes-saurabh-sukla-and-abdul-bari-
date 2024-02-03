//array as a parameter in a function 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void fun(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        A[i]=i+1;
    }
    A[0]=9;             //we always pass array as a address in parameter so
                        //if we change formal argument the actual arugment also be changed
}
int main()
{   
    int A[5],i;
    fun(A,5);
    cout<<A[0]<<endl;
    for(int x:A){
        cout<<x<<endl;
    }
    return 0;
}