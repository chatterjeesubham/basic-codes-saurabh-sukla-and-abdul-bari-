//priting the numbers and reverse numbers using recursion
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void fun1(int n)  //recursive function
{
    if(n>0){      // a based condition must be there in any recursion for stoping the recursion
    cout<<n<<"\t";   //printing is done at calling time
    fun1(n-1);
    }
}
void fun2(int n)   //recursive function
{
    if(n>0){
        fun2(n-1);
        cout<<"\n"<<n; //printing is done at returning time
    }
}
int main()
{
    int x=4;
    fun1(x);
    fun2(x);
    return 0;
}
