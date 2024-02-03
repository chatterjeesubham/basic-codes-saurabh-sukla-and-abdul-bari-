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
struct node *search(struct node *p,int key)
{   
    struct node *q;
    while(p)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
struct node*Rsearch(struct node *p,int key)
{
    if(p==0)
      return NULL;
    if(key==p->data)
      return p;
    return Rsearch(p->next,key);     
}

int main()
{
    int A[]={1,3,7,9,15,11,13,38};
    create(A,8);
    if(search(first,9)!=NULL)
            printf("key is there in linked list");
    else
    {
         printf("key is not there in linked list");
    }           
    return 0;
}