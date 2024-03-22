#include<iostream>
using namespace std;
//easy solution
// int pow(int m,int n)
// {
//     if(n==0)
//         return 1;
//     else
//         return pow(m,n-1)*m;
// }
//optimal code:
int pow(int m,int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return pow(m*m,n/2);
    else if(n%2==1)
        return m*pow(m*m,(n-1)/2);       
}
int main()
{
    cout<<pow(2,9);
    return 0;
}