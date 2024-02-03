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
void insert(struct node*p,int index,int key)
{
   int i;
   struct node*t;
   if(p==0||index>sizeof(p))
        return;
   t=(struct node*)malloc(sizeof(struct node)) ;
   t->data=key;
   if(index==0)
   {
       t->next=first;
       first=t;
   }   
   else
   {
       for(i=0;i<index-1;i++)
           p=p->next;
       t->next=p->next;
       p->next=t;   
   } 
}
int count(struct node *p)
{
    int l=0;
    while(p!=NULL)
    {
        l++;
        p=p->next;
    }
    return l;
}
void display(struct node *p)
{      while(p!=NULL)
       {
       printf("%d ",p->data);
       p=p->next;
       }
}
int main()
{
    int A[]={1,3,7,9};
    create(A,4);
    insert(first,3,5);
    display(first);
            
    return 0;
}