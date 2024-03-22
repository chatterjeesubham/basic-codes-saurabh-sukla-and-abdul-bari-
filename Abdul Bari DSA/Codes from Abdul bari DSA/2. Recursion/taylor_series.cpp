#include<iostream>
using namespace std;
double tay(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else{
        r=tay(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main()
{
    cout<<tay(4,10);

    return 0;
}
