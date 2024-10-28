//here we write our code and pass our vectore in some display function>>
//also fouces on header file include<vector>
#include<iostream>
#include<vector>
using namespace std;

display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" " <<v[i];
    }
    
}

int main()
{
    vector<int> vec1;
    vec1.push_back(20);
    vec1.push_back(30);
    vec1.push_back(40);
    vec1.pop_back();
    cout<<"The size of Vector is :> "<<vec1.size();
    display(vec1);   
}
//this way we can achive the vector and size as well >> some operation doing