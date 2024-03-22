// note:
// There are 4 general rules for solving a pattern-based question: 
// 1.We always use nested loops for printing the patterns. For the outer loop,
//  we count the number of lines/rows and loop for them.
// 2. Next, for the inner loop, we focus on the number of columns and 
// somehow connect them to the rows by forming a logic such that for each row we
//  get the required number of columns to be printed.
// 3.We print the ‘*’ inside the inner loop.
// 4.Observe symmetry in the pattern or check if a pattern is a combination of two or 
// more similar patterns.

#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
// void pattern5(int n)
// {
//     for(int i=n;i>0;i--)
//     {
//         for(int j=i;j>0;j--)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// or
void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
// void pattern6(int n)
// {
//     for(int i=n;i>0;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// or
void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n)
{
    for(int i=n;i>0;i--)
    {
        
    }
}


// other than striver sheet pattern:
// 1.pattern:
//     *
//    **
//   ***
//  ****
// ***** 
// void patternA(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j>=n+1-i)
//                 cout<<"* ";
//             else
//                 cout<<"  ";
//         }
//         cout<<endl;
//     }
// }
//2.pattern
// *****
//  ****
//   ***
//    **
//     *
// void patternB(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j<i)
//                 cout<<"  ";
//             else
//                 cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// or
void patternB(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=i&&j<=n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    pattern6(5);
    return 0;
}