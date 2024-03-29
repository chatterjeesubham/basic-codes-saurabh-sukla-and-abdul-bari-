#include<stdio.h>
#include<stdlib.h>
struct stack
{
   int size;
   int top;
   int *s;
}
create(struct stack *st)
{
    printf("enter size of stack");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
}
void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d \n",st.s[i]);
    }
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
       printf("stack overflow");
    else
       {
        st->top++;
        st->s[st->top]=x;
       }
          
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
      printf("stack under flow");
    else
      {
        x=st->s[st->top];
        st->top--;
      } 
    return x;
}
int peek(struct stack st,int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
       printf("invalid position");
    else
    {
        x=st.s[st.top-pos+1];
    }   
    return x;
}
int stacktop(struct stack st)
{
    if(st.top==-1)
       return -1;
    else
       return st.s[st.top];  
}
void isempty(struct stack st)
{
    if(st.top==-1)
       printf("empty");
    else 
       printf("not empty");   
}
void isfull(struct stack st)
{
    if(st.top==st.size-1)
       printf("stack is full");
    else
       printf("stack is not full");   
}

int main()
{   
   struct stack st; 
   create(&st);
   push(&st,10);
   push(&st,20);
   push(&st,30);
   push(&st,40);
   display(st);
   pop(&st);
   display(st);
   printf("%d",peek(st,2));
   
   return 0;
}