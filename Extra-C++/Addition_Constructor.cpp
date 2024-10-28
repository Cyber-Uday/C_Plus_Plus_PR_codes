#include<iostream>
using namespace std;
class Addition
{
    public:
    int a,b;
    void get_info()
    {        cout<<"Enter the first value:> ";
        cin>> a;
        cout<<"Enter the 2nd value :> ";
        cin>> b;}
    void display()
    {        cout<<"The addition is "<<(a+b);}};
int main()
{    Addition a1;
    a1.get_info();
    a1.display();}