//Here abdul bari sir discussed about in each recursive function sometime action maybe done at
//calling time(like fun1) and sometimes action is done at returing time (like fun2).
//Tail recursion and head recursion
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void fun1(int x) //Tail recursion
{
    if(x>0)
    {
        printf("%d\n",x); // printing done at calling time in tail recursion
        fun1(x-1);
    }
}
void fun2(int x) //head recursion
{
    if(x>0)
    {
        fun2(x-1);
        printf("%d\n",x);//printing done at returning time in Head recursion
        
    }
}
void main()
{
    int n=4;
    fun1(n);
    printf("\n\n\n\n");
    fun2(n);
}