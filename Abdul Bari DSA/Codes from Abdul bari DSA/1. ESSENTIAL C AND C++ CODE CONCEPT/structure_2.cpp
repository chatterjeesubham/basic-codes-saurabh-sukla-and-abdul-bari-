#include<iostream>
using namespace std;
struct rectangle{
    int l;
    int b;
    char c;
}r3;
struct student{
    int roll;
    string address;
};
struct rectangle r2={5,6};
int main()
{
//    struct rectangle r;
//    r.l=2;
//    r.b=4;
//    cout<<r.l<<endl<<r.b;
//    struct rectangle r1={7,9};
//    cout<<endl<<r1.l<<endl<<r1.b;
//    r3.l=11;
//    r3.b=14;
//    cout<<endl<<r2.l<<endl<<r2.b;
//    cout<<endl<<r3.l<<endl<<r3.b;
//    cout<<endl<<sizeof(r);

    // struct student s;
    // s.roll=42;    
    // s.address="circus maidan vidhyasagar pally";
    // cout<<s.roll<<endl<<s.address<<endl<<s.address[4];
    struct student s1[3]={{42,"katwa"},{52,"howrah"}};
    s1[2].roll=62;
    s1[2].address="kolkata";
    for(int i=0;i<2;i++)
        cout<<s1[i].roll<<"  "<<s1[i].address<<endl;
    cout<<s1[2].roll<<" "<<s1[2].address<<endl;
    return 0;
}