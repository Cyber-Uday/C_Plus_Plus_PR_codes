#include<iostream>
#include<vector>
using namespace std;

 void display(vector<int> &v)
 {
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }
int main()
{
    vector<int> vec1;
    int element;
    int i;
    for(i=0;i<4;i++)
    {
        cout<<"ENter the element To store in vector :> ";
        cin>>element;
        vec1.push_back(element);
    }    
    vec1.pop_back();// This method is use to delete the end element in vector
    display(vec1);

}