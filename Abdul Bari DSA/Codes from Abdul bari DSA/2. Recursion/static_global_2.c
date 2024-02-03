#include<stdio.h>
int x=0;
int fun3(int n)  //function of adding first 3 natural numbers using recursion
{
    if(n>0)
      return fun3(n-1)+n;
    return 0;  
}
int fun4(int n)
{
  //static int x; //function of retriving square values of 5 using recursion
  if(n>0)
  {
    x++;
    return fun4(n-1)+x;
  }
  return 0;  
}

int main()
{
    int r;
    // r=fun3(3);
    r=fun4(3);
    // r=fun4(3);// as here if we use global or static value the value will not 
              //deleted the variable still there so when after the 2nd time func call the 
              //value will be again increment from previous value not from zero
    printf("\n%d",r);
    return 0;
}