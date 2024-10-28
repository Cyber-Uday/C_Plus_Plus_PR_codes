#include<iostream>
using namespace std;
template <class T>
class Addition
{
    public:
    Addition(T x,T y)
    {
        cout<<"THe addition is:"<<(x+y);
    }
};
template <class T2>
class Subtraction : public Addition
{
    public:
    Subtraction(T2 x,T2 y)
    {
        cout<<"The Subtraction is:"<<(x-y);
    }
};
int main()
{
    Addition <int>al(101,10.20);
    Addition <float>a2(11.01,10.20);
    Subtraction <int>s1(20,10);
}