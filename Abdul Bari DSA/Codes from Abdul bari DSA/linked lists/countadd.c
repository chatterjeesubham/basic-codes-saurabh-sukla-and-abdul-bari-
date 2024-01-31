#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *next;    //self referencetial structure
}*first=NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->Data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->Data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *p)
{
    while(p)
    {
        printf("%d ",p->Data);
        p=p->next;
    }
}

void Rdisplay(struct Node *p)
{
     while(p)
    {
        printf("%d ",p->Data);
        Rdisplay(p->next);
    }
}

int count(struct Node *p)
{
    int l=0;
    while(p!=NULL)
    {
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct Node *p){
    if(p!=0)
        return (Rcount(p->next)+1);
    else
        return 0;    
}

int add(struct Node *p)
{
    int sum=0;
    while(p){
        sum+=p->Data;
        p=p->next;
    }
    return sum;

}

int Radd(struct Node *p){
    int sum=0;
    if(p!=0)
       return (Radd(p->next)+p->Data);
    else
       return 0;   
}

int main()
{
    int A[]={3,7,9,11,13,2};
    create(A,6);
    printf("number of nodes : %d",Radd(first));
    return 0;
}
