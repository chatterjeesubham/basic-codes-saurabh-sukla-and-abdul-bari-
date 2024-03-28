#include<iostream>
using namespace std;
class rectangle{
private:
    int l;
    int b;
public:
rectangle(){
    l=b=0;
}
rectangle(int l1,int b1)
{
    l=l1;
    b=b1;
}
int area();
int peri();
void setlength(int l1){
    l=l1;
}
void setbreadth(int b1){
    l=b1;
}
int getlength()
{
    return l;
}
int getbreadth()
{
    return b;
}
};
int rectangle::area()
{
    return l*b;
}
int rectangle::peri()
{
    return 2*(l+b);
}
int main()
{
    
    // cout<<"enter length and bredth:";
    // int l2,b2;
    // cin>>l2>>b2;
    rectangle r(10,5);
    int a=r.area();
    cout<<"area is "<<a<<endl;
    int p=r.peri();
    cout<<"perimeter is "<<p<<endl;
    return 0;
}