#include<iostream>
using namespace std;
class rectangle{
private://intially class var is by default private to access we have to make this as public
     int l;   //in case of structure var is by default public
     int b;
public:
rectangle(int l1,int b1)
{
    l=l1;
    b=b1;
}
int area()
{
    return l*b;
}
void changelen(int l1)
{
    l=l1;
}
};
int main()
{
    rectangle r(10,5);
    // cout<<r.l<<endl<<r.b; if class var is public then only we can access like this
    r.changelen(20);
    cout<<r.area()<<endl;
    return 0;
}