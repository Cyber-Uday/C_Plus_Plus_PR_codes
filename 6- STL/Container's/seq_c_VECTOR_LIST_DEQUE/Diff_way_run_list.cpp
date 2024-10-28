//let's make one list number of 6 student and make a sum of it >> 
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> lst;
    int element , size;

    cout<<"Enter The size of an list:> ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter an element "<<i<<"For store in list:> ";
        cin>>element;
        lst.push_back(element);
    }

   //first way
    std:: list<int> :: iterator iter;
    for(iter=lst.begin();iter!=lst.end();iter++)
    {
        cout<<" "<<*iter;
    }
    
    //second way to run 
   /* std::list<int>::iterator iter =lst.begin();
   for(int j=0;j<lst.size();j++)
   {
    cout<<" "<<*iter;
    iter++;
   } */

  // third way to run with while loop 
 /*  std::list<int>::iterator iter = lst.begin();
  int j=0;
  while (j<lst.size())
  {
    cout<<" "<<*iter;
    iter++;
    j++;
  } */
  
}