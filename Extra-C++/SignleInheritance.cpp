#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"HEY I AM BASE CLASS"<<endl;
    }
};
class Derived :public Base
{
    public:
    Derived()
    {
        cout<<"HEY I AM DERIVED CLASS";
    }
};
int main()
{
    Derived d;
    
}