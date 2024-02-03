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