// 1. add two numbers 
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b;
//     printf("enter the value of a and b\n");
//     scanf("%d %d",&a,&b);
//     printf("sum= %d",a+b);
//     return 0;
// }

//---------------------------------------------------------------------------------------

// 2. Area of circle
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int r;
//     printf("enter radius of circle\n");
//     scanf("%d",&r);
//     printf("area is %f",3.14*r*r);
//     return 0;
// }

//-----------------------------------------------------------------------------

// 3. input integer only
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int getinteger();
// int main(){
//     int a=0;
//     a=getinteger();
//     printf("\nThe value you type is:",a);
//     return 0;
// }
// int getinteger(){
//     int ss=0,ch;
//     ch=getch();
//     do
//     {
//     if(ch>=48 && ch<=57)
//     { 
//         printf("%c",ch);
//         ss=ss*10+(ch-48);
//         break;
//     }
//     if(ch==13)
//         break;
//     }while(1);    
//     return ss;        
    
// }


//---------------------------------------------------------------------------

//4. swapping two numbers (method one)
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,c;
//     printf("enter value of a and b ");
//     scanf("%d\t%d",&a,&b);
//     printf("a=%d\nb=%d",a,b);
//     printf("\nafter swapping\n");
//     c=a;
//     a=b;
//     b=c;
//     printf("a=%d\nb=%d",a,b);
//     return 0;
// }


//----------------------------------------------------------------------


//swapping two numbers (method two)
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,c;
//     printf("enter value of a and b ");
//     scanf("%d%d",&a,&b);
//     printf("a=%d\nb=%d",a,b);
//     printf("\nafter swapping\n");
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a=%d\nb=%d",a,b);
//     return 0;
// }


//----------------------------------------------------------------------
//swapping two numbers (method three)
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b;
//     printf("enter value of a and b ");
//     scanf("%d\t%d",&a,&b);
//     printf("a=%d\nb=%d",a,b);
//     printf("\nafter swapping\n");
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("a=%d\nb=%d",a,b);
//     return 0;
// }


//----------------------------------------------------------

//5. printing %d 
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     printf("%%d");
//     return 0;
// }


//-----------------------------------------------------------
//6. even or odd(method one)
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("enter a number to check thats a odd or even");
//     scanf("%d",&n);
//     if(n%2==0)
//         printf("its even");
//     else
//         printf("its odd");    
//     return 0;
// }
 

//----------------------------------------------------
//even or odd(method two)
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("enter a number to check thats a odd or even");
//     scanf("%d",&n);
//     if(n&1)
//         printf("its odd"); //If the last digit of a binary number is 1, the number is odd; if
//     else                      // it's 0, the number is even. Ex: 1101 represents an odd number (13);
//         printf("its even");  // 10010 represents an even number (18).
        
//     return 0;
// }


//------------------------------------------------------
//even or odd (method three)
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("enter a number to check thats a odd or even");
//     scanf("%d",&n);
//     if(n/2*2==n)
//         printf("its even");
//     else
//         printf("its odd");    
//     return 0;
// }


//------------------------------------------------------------
//7. take any number from user and tell the number is divisible by 5 or not.
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("enter a number to check thats a odd or even");
//     scanf("%d",&n);
//     if(n%5==0)
//         printf("its divisible by 5");
//     else
//         printf("its not divisible by 5");    
//     return 0;
// }


//------------------------------------------------------------------------

//8.Write a program to to find greater between two numbers.
//#include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main(){
//     int x,y;
//     printf("enter two number\n");
//     scanf("%d %d",&x,&y);
//     if(x>y)
//        printf("%d is greater",x);
//     else if(x<y)
//        printf("%d is greater",y); 
//     else
//        printf("Both numbers are equal");
//     return 0;
// }

//--------------------------------------------------------------------------
//9.Write a program to to find greater among three numbers.
//method:1
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main(){
//     int x,y,z,k;
//     printf("enter two number\n");
//     scanf("%d %d %d",&x,&y,&z);
//     if(x>y&&x>z)
//         k=x;
//     else
//     {
//         if(y>z)
//           k=y;
//         else
//           k=z;
//     }   
//     printf("%d is greatest",k);

//     return 0;
// }
/*note:from the 1st if we know the x is not the greatest so in 1st else we dont compare any
other two with x,so in this else part we compare other two var*/
//method :2
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main(){
//     int x,y,z,k;
//     printf("enter two number\n");
//     scanf("%d %d %d",&x,&y,&z);
//     if(x>y)
//     {
//         if(x>z)    
//             k=x;
//         else
//             k=z;    
//     }
//     else
//     {
//         if(y>z)
//             k=y;
//         else
//             k=z;    
//     }
//     printf("%d is greatest",k);

//     return 0;
// }
//method:3
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main(){
//     int x,y,z;
//     printf("enter two number\n");
//     scanf("%d %d %d",&x,&y,&z);
//       //k=x>y?x>z?x:z:y>z?y:z
//     printf("%d is greatest",x>y?x>z?x:z:y>z?y:z);
//     return 0;
// }

//----------------------------------------------------------------------------------
//10.Write a program to find roots of a quadratic equation
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<math.h>
// int main()
// {
//     int a,b,c,D;
//     float x,y;
//     printf("print the co-efficient value of x^2,x and constant \n");
//     scanf("%d %d %d",&a,&b,&c);
//     D=b*b-4*a*c;
//     if(D<0)
//        printf("Both two roots are imaginary");
//     else if(D==0)
//     { 
//        printf("Both roots are same or equal.\n");
//        x=-b/(2.0*a);
//        printf("The root is %f",x);
//     }   
//     else
//     { 
//        printf("Both two roots are distinct\n");
//        x=(-b+sqrt(D))/(2*a);
//        y=(-b-sqrt(D))/(2*a);
//        printf("The 1st root is %f\n",x);
//        printf("The 2nd root is %f",y);
//     }
//     return 0;
// }



//----------------------------------------------------------------------------------
//11.C Program to check leap year
//method:1
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// #include<math.h>
// int main()
// {
//     int y;
//     printf("Enter the year\n");
//     scanf("%d",&y);
//     if(y%4)
//         printf("It's not a leap year");  //if true then this statement is running and means not zero(as not divisible) which means not leap year  
//     else if(y%100)
//         printf("It's a leap year");
//     else if(y%400)
//         printf("Its not a leap year");
//     else
//         printf("It's a leap year");            
//     return 0;
// }
//method: 2
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main()
// {
//     int y;
//     printf("Enter the year\n");
//     scanf("%d",&y);
//     if(y%100==0)
//     {
//         if(y%400==0)
//            printf("leap year");
//         else
//            printf("not a leap year");   
//     }
//     else
//     {
//         if(y%4==0)
//             printf("leap year");
//         else
//             printf("not a leap year");    
//     }
//     return 0;
// }

//-----------------------------------------------------------------------------------
//12.	WAP to identify A number is positive or negative.
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);
//     if(n>0)
//        printf("its positive number");
//     else if(n<0)
//        printf("its negitive number");
//     else
//        printf("its zero");      
//     return 0;
// }