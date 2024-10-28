#include<iostream>
using namespace std;
template <class t1,class t2>
class Perform 
{
    public:
    void display(t1 x,t2 y)
    {
        t1 data1=x;
        t2 data2=y;
        cout<<"Data 1 value is:> "<<data1<<"Data 2 Value is::> "<<data2;
    }
};
int main()
{
    Perform <int,char> obj;
    obj.display(1,'U');
}