#include<bits/stdc++.h>
using namespace std;
int ifib(int n)
{
    int t1=0,t2=1,i,s;
    if(n<=1) return n;
    for(i=2;i<=n;i++)
    {
        s=t1+t2;
        t1=t2;
        t2=s;
    }
    return s;
}
int rfib(int n)
{
   if(n<=1) 
        return n;
   else
        return rfib(n-2)+rfib(n-1);
}
int F[10];
int bestRfib(int n)
{
   if(n<=1) 
    {
        F[n]=n;
        return n;
    }
   else
    {
        if(F[n-2]==-1)
        {
            F[n-2]=bestRfib(n-2);
        }
        if(F[n-1]==-1)
        {
            F[n-1]=bestRfib(n-1);
        }
        F[n]=F[n-2]+F[n-1];
        return bestRfib(n-2)+bestRfib(n-1);
    }
}
int main()
{
    for(int i=0;i<10;i++)
        F[i]=-1;
    cout<<bestRfib(8);
    return 0;
}
