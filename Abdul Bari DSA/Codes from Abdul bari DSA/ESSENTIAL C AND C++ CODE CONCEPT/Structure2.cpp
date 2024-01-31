#include<iostream>
using namespace std;
struct card{
    int face ;
    int shape;
    int color;
};

int main()
{
    struct card deck[5]={{1,0,0},{0,1,0},{0,0,1},{2,0,0},{0,2,0}};//array of structure
    cout<<deck[0].face<<endl;
    cout<<deck[0].shape<<endl;
    cout<<deck[0].color<<endl;  
    return 0;
}