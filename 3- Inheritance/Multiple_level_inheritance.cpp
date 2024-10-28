#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"This is Class A "<<endl;
    }
};
class B
{
    public:
    B()
    {
        cout<<"THis is class B"<<endl;
    }
};
class C :public A,public B
{
    public:
    C(int x)
    {
        cout<<"THIS IS VALUE OF C CLASS IN:> "<<x;
    }
};
int main()
{
    C obj(10);
}