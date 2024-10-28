#include<iostream>
using namespace std;
//Inheritance is used for Reuse the program 
//there are diffrent diffrent types of inheritance in c++
//Single level inheritance is part of inheritance >>
/* In single level inheritance we can (derived,child,new) a new only one 
    class from (base,parent,old) class 
  */ 
class A 
{
    public:
    A()
    {
        cout<<"This is Class A"<<endl;
    }
};
//After Class end you need to add semicoloan in C++ ;
class B :public A
{
    public://there are 3 diffrent acces specifier are
    /* public, private , protected , we can use any one of them*/
    B()//We using a default constructor here 
    {
        cout<<"THis is Derived From Class A";
    }
};
int main()
{
    B b;
    return 0;
}