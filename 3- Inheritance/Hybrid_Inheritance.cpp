/*
    combination of More than one inheritance called 
    the Hybrid Inheritance >>   
*/
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"THIS IS CLASS A "<<endl;
    }
};
class B
{
    public: 
    B()
    {
        cout<<"THIS IS CLASS B:"<<endl;
    }
};
class C :public A, public B
{
public:
C()
{
    cout<<"HEY I COME FROM A AND B:>"<<endl;
}
};
class D : public C 
{
    public:
    D()
    {
        cout<<"HEY I AM D FROM C"<<endl;
    }
};
    int main()
    {
        D obj;
        return 0;
    }