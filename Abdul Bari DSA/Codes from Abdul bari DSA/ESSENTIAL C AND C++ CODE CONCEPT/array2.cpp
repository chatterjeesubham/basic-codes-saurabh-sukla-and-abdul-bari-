#include<iostream>
using namespace std;
int main()
{
    // int A[8]={2,4,6,8,10,12};
    /*using for loop
    for(int i=0;i<8;i++)
    {
        cout<<A[i]<<endl;
    }
    */
   /*using for each loop*/
   int n;
   cout<<"enter the size"<<endl;
   cin>>n;
   int A[n];
   A[0]=2;
   A[1]=4;
   A[2]=6;
   for(int x:A)
   {
        cout<<x<<endl; 
   }

    return 0;
}