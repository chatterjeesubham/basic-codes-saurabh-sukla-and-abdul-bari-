#include<iostream> //c++ headerfile
#include<stdio.h> //c headerfile also can be used in c++
using namespace std;
int main()
{
    /*
    int B[5];//={8,7,6,5,4}
    int i;
    for(i=0;i<5;i++)
    {
        cin>>B[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"inserted value is "<<B[i]<<endl;
    }
    */

   /*
   int A[5];
   A[0]=1;
   A[1]=2;
   A[2]=3;
   cout<<sizeof(A)<<endl;
   cout<<A[0]<<endl;
   printf("%d\n",A[1]);
   */
  /*
   int C[]={8,7,6,5,4,3,2,1};
   cout<<sizeof(C)<<endl;
   cout<<C[6]<<endl;
   cout<<C[7]<<endl;   
   cout<<C[8]<<endl;/*as size of C is not given in [] brackets so C[8] and C[9]
                     give garbage value as in C total 8 elements are there upto index 7
   printf("%d\n",C[9]);
    */

   int D[10]={8,7,6,5,4,3,2,1};
   cout<<sizeof(D)<<endl;
   cout<<D[6]<<endl;
   cout<<D[7]<<endl;   
   cout<<D[8]<<endl;/*as size of D is given in [] which is 10 brackets so D[8] and D[9]
                     give zero value as in C total 8 elements are there upto index 7*/
   printf("%d\n",D[9]);
   return 0;
}