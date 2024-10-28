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
        cout<<"ENter the element To store tor :> ";
        cin>>element;
        vec1.push_back(element);
    }    
   std:: vector<int> :: iterator iter= vec1.begin();
   vec1.insert(iter+2,2,10);
   //vector_obj, operation ( interator_obj,number_of_copies_, element );
    
    display(vec1);

}