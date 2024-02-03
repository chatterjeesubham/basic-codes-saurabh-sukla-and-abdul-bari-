#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }

}

int max(struct node *p)
{
   int m=-1000;
   while(p!=NULL)
   { 
       if(p->data>m)
       {
          m=p->data;
       }
       p=p->next;
   }
   return m;
}
int rmax(struct node*p)
{
    int x=0;
    if(p==0)
    {
        return -1000;
    }
    else
    {
        x=rmax(p->next);
        return(x>p->data?x:p->data);
        /*if(x>p->data)
           return x;
        else
           return p->data; */

    }
}
int min(struct node *p)
{
   int m=1000;
   while(p!=NULL)
   { 
       if(p->data<m)
       {
          m=p->data;
       }
       p=p->next;
   }
   return m;
}
int main()
{
    int A[]={1,3,7,9,15,11,13,38};
    create(A,8);
    printf("min value is %d \n",min(first));

    return 0;
}