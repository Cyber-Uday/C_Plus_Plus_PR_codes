#include<iostream>
#include<list>
using namespace std;
//list basically used for store the element's bidirected 
void display(list<int> lst)
{
    std:: list<int> :: iterator iter;
    for(iter=lst.begin();iter!=lst.end();iter++)
    {
        cout<<" "<<*iter;
    }
}
int main()
{
    list<int> list1;//length of list =0
    list<int> list2(4);//4 elements list with empty value>>
   
   //her we add element's upon the list 1
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
//this way we also can use or print 
 /*    iter =list1.begin();
    cout<<" "<<*iter;
    iter++;
    cout<<" "<<*iter;
    iter++;
    cout<<" "<<*iter;
 */
//here 2nd way with calling void display and pass list as an argument 
 display(list1);

    // this is list 2
    //we simple making one iterator object and assign one by one value on empty element .
    std::list<int>::iterator it;
    it=list2.begin();
    *it =2;
    it++;
    *it=4;
    it++;
    *it=5;
    it++;
    *it=10;
    it++;
    display(list2);


}