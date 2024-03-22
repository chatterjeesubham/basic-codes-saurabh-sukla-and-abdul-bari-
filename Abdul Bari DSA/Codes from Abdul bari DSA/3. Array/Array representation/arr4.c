//creating 2D pointer in 3 different ways.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    int *p[3];//pointer of array
    int **q;//pointer of array of array

    p[0]=(int *)malloc(4*sizeof(int));
    p[1]=(int *)malloc(4*sizeof(int));
    p[2]=(int *)malloc(4*sizeof(int));

    q=(int **)malloc(3*sizeof(int *));
    q[0]=(int *)malloc(4*sizeof(int));
    q[1]=(int *)malloc(4*sizeof(int));
    q[2]=(int *)malloc(4*sizeof(int));
    
    // int *b[3];
    // b[0]=new int[4];
    // b[1]=new int[4];
    // b[2]=new int[4];
    
    // int **c;
    // c=new int*[3];
    // c[0]=new int[4];
    // c[1]=new int[4];
    // c[2]=new int[4];


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",A[i][j]);

            //p[i][j]=A[i][j];
            //printf("%d\t",p[i][j]);

            //q[i][j]=A[i][j];         
            //printf("%d\t",q[i][j]);
        }
        printf("\n");
    }

    return 0;
}