//1.Write a program to print Your name 5 times on the screen. 
//method 1:
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i;
//     for(i=0;i<5;i++)
//     {
//         printf("subho\n");
//     }
//     return 0;
// }
//method 2:
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i=0;
//     while(i<5)
//     {
//         printf("subho\n");
//         i++;
//     }
//     return 0;
// }
//method:3
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i=0;
//     do
//     {
//         printf("subho\n");
//         i++;
//     }while(i<5);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------

//2.Write a program to print first 10 natural numbers.
// method:1
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//        printf("%d\t",i);
//     return 0;
// }
// method:2
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i=1;
//     while(i<=10){ 
//         printf("%d\t",i);
//         i++;
//     }
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------

//3.Write a program to print first 10 natural numbers in reverse order.
//method 1:
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i;
//     for(i=10;i>0;i--)
//        printf("%d\t",i);
//     return 0;
// }
//method:2
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//         printf("%d\t",11-i);
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------

//4.Write a program to print first N natural numbers. (N is given by user)

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i,n;
//     printf("print the number upto which you want to print");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//         printf("%d\n",i);
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------

//5.Write a program to print first N natural numbers(including 0) in reverse order. (N is given by user)
//method:1
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i,n;
//     printf("print the number upto which you want to print");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//         printf("%d\n",n-i);
//     return 0;
// }
//method:2 (not including zero)
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int i,n;
//     printf("print the number upto which you want to print");
//     scanf("%d",&n);
//     for(i=n;i>0;i--)
//         printf("%d\n",i);
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------
//6.Write a program to print first 10 even natural numbers.
//#include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         printf("%d\n",2*i);
//     }
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//7.Write a program to print first 10 odd natural numbers.
//method 1:
// #include<stdio.h>
// int main(){
//     int x=1,i=1;
//     while(i<=10)
//     {
//         printf("%d\t",x);
//         x=x+2;
//         i++;
//     }
//     return 0;
// }
//method 2:
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         printf("%d\n",2*i-1);
//     }
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//8.Write a program to print first N even natural numbers.
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("enter the number upto which you wants to print the even numbers\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         printf("%d\n",2*i);
//     }
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//9.Write a program to print first N odd natural numbers.
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("enter the number upto which you wants to print the odd numbers\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         printf("%d\n",2*i-1);
//     }
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//10.Write a program to print first N even natural numbers in reverse order.
// #include<stdio.h>
// int main()
// {
//     int i,n;
//     scanf("%d",&n);
//     for(i=n;i>0;i--)
//     {
//         printf("%d\t",2*i);
//     }
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//11.Write a program to print first N odd natural numbers in reverse order.
// #include<stdio.h>
// int main()
// {
//     int i,n;
//     scanf("%d",&n);
//     for(i=n;i>0;i--)
//     {
//         printf("%d\t",(2*i)-1);
//     }
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//12.Write a program to print table of user’s choice.
// #include<stdio.h>
// int main()
// {
//     int i=1,n;
//     scanf("%d",&n);
//     for(i=1;i<=10;i++)
//     {
//         printf("%d*%d=%d\n",n,i,n*i);
//     }
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//13. WAP to calculate sum of first N natural numbers.
// #include<stdio.h>
// int main()
// {
//     int sum=0,i,N;
//     scanf("%d",&N);
//     for(i=1;i<=N;i++)
//     {
//         sum+=i;
//     }
//     printf("%d",sum);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//14. WAP to calculate product of first N natural numbers.
// #include<stdio.h>
// int main()
// {
//     int pdt=1,i,N;
//     scanf("%d",&N);
//     for(i=1;i<=N;i++)
//     {
//         pdt=pdt*i;
//     }
//     printf("%d",pdt);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//15. WAP to calculate factorial of a number.
// #include<stdio.h>
// int main()
// {
//     int pdt=1,i,N;
//     scanf("%d",&N);
//     for(i=N;i>0;i--)
//     {
//         pdt=pdt*i;
//     }
//     printf("%d",pdt);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//16. WAP to calculate sum of first N even natural numbers.
//method1:
// #include <stdio.h>
// int main() {
//     int i=1,s=0,n;
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         s=s+2*i;
//         i++;
//     }
//     printf("%d",s);
//     return 0;
// }
//method2:
// #include<stdio.h>
// int main()
// {
//     int n,i=2,s=0;
//     scanf("%d",&n);
//     while(i<=2*n)
//     {
//         s=s+i;
//         i=i+2;
//     }
//     printf("%d",s);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//17. WAP to calculate sum of first N odd natural numbers.
// #include<stdio.h>
// int main()
// {
//     int n,i=1,s=0;
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         s=s+2*i-1;
//         i++;
//     }
//     printf("%d",s);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//18. WAP to calculate x power y(when user input x is 2 and y is 3 then the result will be 8)
// #include<stdio.h>
// int main()
// {
//     int x,y,i,pdt=1;
//     scanf("%d%d",&x,&y);
//     for(i=1;i<=y;i++)
//     {
//         pdt=pdt*x;
//     }
//     printf("%d ",pdt);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//19. Write a program to count digits in a given number.
// #include<stdio.h>
// int main()
// {
//     int n,i=0;
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         n=n/10;
//         i++;
//     }
//     printf("%d",i);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------
//20. Write a program to calculate sum of the digits of a given number.
// #include<stdio.h>
// int main()
// {
//     int n,i=0,s=0;
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         s=s+(n%10);
//         n=n/10;
//     }
//     printf("%d",s);
//     return 0;
// }

//---------------------------------------------------------------------------------------------------
//21.Write a program to reverse a number.
// #include<stdio.h>
// int main()
// {
//     int n,r,y=0;
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         //r=n%10;
//         y=y*10+(n%10);      //(if previous line is taken then in this line not commented lines 
//                             //will be commented, and this will be free)--> y=y*10+r;
//         n=n/10;
//     }
//     printf("%d",y);
//     return 0;
// }

//---------------------------------------------------------------------------------------------------
//22. Write a program to print all Armstrong numbers under 1000.
//armstrong number: 153 is armstrong number as 1^3+5^3+3^3=153

// #include<stdio.h>
// int main()
// {
//     int i,j,r,s;
//     for(i=1;i<=1000;i++)
//     {
//         s=0;
//         j=i;
//         while(j!=0)
//         { 
//            r=j%10;
//            s=s+r*r*r;
//            j=j/10; 
//         }
//         if(s==i)
//            printf("%d\n",i);

//     }
//     return 0;
// }

//---------------------------------------------------------------------------------------------------
//23. Write a program to calculate LCM of two numbers.(LCM: lowest common multiplication) in beng: lo.sa.gu
// if i is lcm of a and b it means i is the lowest number which divisible by both a and b
// #include<stdio.h>
// int main()
// {
//     int m,n,i;
//     scanf("%d%d",&m,&n);
//     for(i=1;i<=m*n;i++)
//     {
//         if(i%m==0 && i%n==0)
//         { 
//            printf("LCM is %d",i);
//            break; 
//         }   
//     }
//     return 0;
// }

// improve code:(all lines are same accept this line)
// for(i=m>n?m:n;i<=m*n;i++)

// most improved code:(all lines are same accept this line)
// for(i=m>n?m:n;i<=m*n;i=i+m>n?m:n)

//---------------------------------------------------------------------------------------------------
//24. Write a program to calculate HCF of two numbers.
//hcf is highest common factor means if 'h' is a hcf of 'a' and 'b' that means h is the highest
//common highest factor of a and b.For 4 and 6 factors of 4: 1,2,4 and 6: 1,2,3,6 ; here as we see
//the common factors of 4 and 6 are 1 and 2. so highest common factor of 4 and 6 is 2. 
// #include<stdio.h>
// int main()
// {
//     int a,b,h;
//     printf("print two numners:\n");
//     scanf("%d%d",&a,&b);
//     for(h=a<b?a:b;h>=1;h--)
//     {
//         if(a%h==0&&b%h==0)
//         {
//             printf("hcf of %d and %d is %d",a,b,h);
//             break;
//         }        
//     }
//     return 0;
// }

//---------------------------------------------------------------------------------------------------
//25. Write a program to check whether a given number is prime or not.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int n,i;
//     printf("enter a number:\n");
//     scanf("%d",&n);
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             printf("%d is not a prime number",n);
//             break;
//         }
//     }
//     if(i==n)
//         printf("%d is a prime number",n);
//     return 0;
// }

//---------------------------------------------------------------------------------------------------
//26. Write a program to print all prime numbers between two given numbers.
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j,a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     for(i=a;i<=b;i++)
//     { 
//     for(j=2;j<i;j++)
//     {
//         if(i%j==0)
//         {
//             break;
//         }
//     }
//     if(i==j)
//         printf("%d  ",i);
//     }
    
//     return 0;
// }

//---------------------------------------------------------------------------------------------------
//27. Write a program to print all prime factors of a given number.
//    For example prime factors of 36 are 2,2,3,3
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int n,i,j;
//     printf("enter a number:\n");
//     scanf("%d",&n);
//     for(i=2;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             for(j=2;j<i;j++)
//             {
//                 if(i%j==0)
//                    break;
//             }
//             if(j==i)
//                 printf("%d ",i);
//         }
//     }
    
//     return 0;
// }

//---------------------------------------------------------------------------------------------------
//28. Write a program to print first N terms of Fibonacci series.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int t1=-1,t2=1,n,t;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         t=t1+t2;
//         printf("%d ",t);
//         t1=t2;
//         t2=t;
//     }
// }

//---------------------------------------------------------------------------------------------------
//29. Write a program to check co-prime numbers.
//a and b is co prime numbers if a and b both does not have any  common factor other than 1. means
//no single numbers are exists which can be divisible by both a and b.
// Example 1: 21 and 22
// For 21 and 22:
// The factors of 21 are 1, 3, 7, and 21.
// The factors of 22 are 1, 2, 11, and 22.
// Here 21 and 22 have only one common factor that is 1. Hence, their HCF is 1 and are co-prime.

// Example 2: 21 and 27
// For 21 and 27:
// The factors of 21 are 1, 3, 7, and 21.
// The factors of 27 are 1, 3, 9, and 27.
// Here 21 and 27 have two common factors; they are 1 and 3. HCF is 3 and they are not co-prime.
//code:
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,i,c;
//     scanf("%d%d",&a,&b);
//     c=a<b?a:b;
//     for(i=2;i<=c;i++)
//     {
//         if(a%i==0 && b%i==0)
//         {
//             printf("its not co prime");
//             break;
//         }
            
//     }
//     if(i==(c+1))
//         printf("its co prime");
//     return 0;
// }

//---------------------------------------------------------------------------------------------------
//30. Write a program to print N co-prime numbers.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a=2,b,i,c,n;

//     scanf("%d",&n);
    
//     while(n)
//     {
//         for(b=2;b<=a;b++)
//         {
//             c=a<b?a:b;
//             for(i=2;i<=c;i++)
//             {
//                 if(a%i==0 && b%i==0)
//                     break;
//             }
//             if(i==(c+1))
//             {
//                 printf("%d,%d\n",a,b);
//                 n--;
//                 if(n==0)
//                     exit(0);
//             }
//         }
//         a++;
//     }
//     return 0;
// }

//---------------------------------------------------------------------------------------------------
//31. Write a program to convert a binary number to decimal number(code in normal and improved logic both).
//1st method:
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int main()
// {
//    int n,i=0,s=0;
//    scanf("%d",&n);
//    while(n)
//    {
//         s=s+(pow(2,i)*(n%10));
//         n=n/10;
//         i++;
//    }
//    printf("%d",s); 
//    return 0;
// }

//2nd method:
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int btod(char s[])
// {
//     int i,d=0;
//     for(i=0;s[i]!='\0';i++)
//     {
//         if(s[i]=='0')
//             d=2*d+0;
//         else if(s[i]=='1')
//             d=d*2+1;
//     }
//     return d;
// }
// int main()
// {
//   printf("%d",btod("10101")); 

//    return 0;
// }


//---------------------------------------------------------------------------------------------------
//32. Program to print first n positive numbers with two bits setSolution first logic|Solution Second Logic
//1st method:


//2nd method:


//---------------------------------------------------------------------------------------------------
//33. WAP to convert a decimal number to binary number.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n,i=0,r,j;
//     int a[10];
//    scanf("%d",&n);

//    while(n)
//    {
//         r=n%2;
//         a[i]=r;
//         n=n/2;
//         i++;
//    } 
//    for(j=i-1;j>=0;j--)
//    {
//      printf("%d",a[j]);
//    }
//    return 0;
// }


//------------------------------------now after 33 go for pattern printing--------------------------------------
//34. Series Problems Program in C1+(1+2)+(1+2+3)+…+(1+2+3+…+N).


//---------------------------------------------------------------------------------------------------
//35. Series Problems Print first N Prime numbers.








