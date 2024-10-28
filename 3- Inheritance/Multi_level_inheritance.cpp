#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"THis is Class A"<<endl;
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<"This is Class B"<<endl;
    }
};
class C : public B
{
    public:
    C()
    {
        cout<<"THis is the Class C"<<endl;
    }
};
int main()
{    C c;

}
/* IN this multilevel Inheritance we can create another 
derived class from old derived class,
 -> we can say like that multilevel inheritance is like 
 saap-sidi
 */