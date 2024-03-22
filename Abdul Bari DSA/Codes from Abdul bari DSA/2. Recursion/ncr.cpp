#include<bits/stdc++.h>
using namespace std;
int fact(int s)
{
    if(s==0) return 1;
    else 
        return fact(s-1)*s;
}
int c(int n,int r)
{
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);
}
int rc(int n,int r)
{
    if(r==0||n==r) return 1;
    else    
        return rc(n-1,r-1)+rc(n-1,r);
}
int main()
{
    cout<<rc(4,2);
    return 0;
}