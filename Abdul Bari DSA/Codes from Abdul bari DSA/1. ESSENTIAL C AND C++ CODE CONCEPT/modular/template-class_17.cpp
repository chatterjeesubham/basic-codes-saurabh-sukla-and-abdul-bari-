//create  a arithmetic class of int then convert it into template class
#include<iostream>
using namespace std;
template <class T>
class arithmetic{
    private:
        T a;
        T b;
    public:
        arithmetic();
        arithmetic(T a, T b);
        T add(T a,T b);
        T sub();
        T geta()
        {
            return a;
        }
        T getb()
        {
            return b;
        }
};

template <class T>
arithmetic<T>::arithmetic()
{
    a=b=0;
}

template <class T>
arithmetic<T>::arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template <class T>
T arithmetic<T>::add(T a,T b)
{
    return a+b;
}
template <class T>
T arithmetic<T>::sub()
{
    return a-b;
}
int main()
{
    arithmetic<int> a(4,5);
    cout<<a.geta()<<endl;
    cout<<a.getb()<<endl;
    cout<<a.add(4,5)<<endl;
    cout<<a.sub()<<endl;
    arithmetic<float> a1(6.11,7.22);
    cout<<a1.add(6.11,7.22)<<endl;
    cout<<a1.sub()<<endl;
    return 0;
}
