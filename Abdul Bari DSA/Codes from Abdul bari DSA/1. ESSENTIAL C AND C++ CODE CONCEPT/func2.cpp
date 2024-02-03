//call by value
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void swap(int a,int b) 
{
    int temp=b;
    b=a;
    a=temp;
                      //inside this function the formal parameters will swap but that does not
                        //effect on actual parameter as we use call by value
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);   //as we are using call by value so the actual parameters are remain same 
    cout<<a<<endl<<b;             //they didnt swap at all the swap  is done inside formal parametes so here the
                 //value of a and b are same not swap at all.
    return 0;
}