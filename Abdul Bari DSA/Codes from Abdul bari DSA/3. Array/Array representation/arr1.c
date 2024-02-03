// declaration ,inhitializing and accessing the array
#include<stdio.h>
int main()
{
   //  declaring and inhitializing the array:-
    int A[5]={2,4,6,8,10};
    int B[5]={2,4};
    int C[5]={0};
    int D[]={2,4,6,8,10,12};
   //  accessing the array elemets:-
   //  printf("%d \n",A[1]);
   //  printf("%d \n",2[A]);
   //  printf("%d \n",*(A+3));
   //  for(int i=0;i<5;i++)
   //  {  
   //     printf("%d ",A[i]);
   //  } 
   //  printf("\n%d\n",sizeof(A));   
   //  printing contiguious array addresses :-
    for(int i=0;i<5;i++)
    {  
       printf("%u ",&A[i]);
    } 
    return 0;
}