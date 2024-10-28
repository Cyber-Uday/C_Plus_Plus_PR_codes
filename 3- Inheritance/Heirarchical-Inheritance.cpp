/* In this Inheritance we can make multiple Derived class 
    From only one Base Class
  */
#include<iostream>
using namespace std;
class A 
{
    public:
    A()
    {
        cout<<"I AM CLASS A"<<endl;
    }
};
class B : public A 
{
    public:
    B()
    {
        cout<<"I AM B BUT CHILD OF CLASS A"<<endl;
    }
};
class C : public A 
{
    public:
    C()
    {
        cout<<"THis is class C but child of A "<<endl;
    }
};
class D : public A 
{
    public: 
    D()
    {
        cout<<"THIS IS CLASS D"<<endl;
    }
};
int main()
{
    
    D obj;

}