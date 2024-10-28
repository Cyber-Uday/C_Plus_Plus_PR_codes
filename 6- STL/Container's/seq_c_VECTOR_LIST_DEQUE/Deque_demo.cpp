//here we implement the dequeu in seq container >> 
#include<iostream>
#include<deque>
using namespace std;

display(deque<int> &d)
{
    std::deque<int>::iterator iter=d.begin();
    cout<<"The Dequeu Is here:> ";
    for (; iter!=d.end(); iter++)
    {
        cout<<" "<<*iter;
    }   
}
int main()
{
    deque<int> dq;
    
    //get the size of dq and store element in dq
    //this is random iterator which point everywhere na pop everywhere
    int element,size;
    cout<<"Enter the size of Dqeue:> ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Eneter the element "<<i<<" of this:> ";
        cin>>element;
        dq.push_back(element);
    }
    //good we donw dq with user input now go with display function call 
    display(dq);
}