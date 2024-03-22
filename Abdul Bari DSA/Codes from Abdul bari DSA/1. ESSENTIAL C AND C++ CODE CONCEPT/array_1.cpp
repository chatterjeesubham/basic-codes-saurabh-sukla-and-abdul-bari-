#include<iostream>
using namespace std;
int main()
{
    int a[5];
    a[0]=1;
    a[2]=2;
    a[1]=3;
    // cout<<sizeof(a)<<endl;
    // for(int i=0;i<(sizeof(a)/sizeof(int));i++)
    //     cout<<a[i]<<endl;
    // int b[6]={2,4,6};
    // cout<<sizeof(b)<<endl;
    // for(int i=0;i<(sizeof(b)/sizeof(int));i++)
    //         cout<<b[i]<<endl;
    int n;
    cin>>n;
    int d[n];
    d[0]=2;
    d[1]=4;
    d[2]=6;
    for(int j:d)
        cout<<j<<endl;
    cout<<endl;
    int c[10]={9,2,3,4,5,6,7};
    // cout<<sizeof(c)<<endl<<c[2]<<endl<<c[5];
    // cout<<c[0]<<endl;
    for(int i:c)
        cout<<i<<endl;
    return 0;
}