#include<iostream>
using namespace std;
template<class T1>
class Addition
{
    public:
    Addition(T1 a,T1 b)
    {
        cout<<"The addtion is: > "<<(a+b);
    }
};
int main()
{
    cout<<"enter any 2 number :> ";
   float a,b;
   cin>>a>>b;
    Addition <int> obj(a,b);
    Addition <float> obj(a,b);
}