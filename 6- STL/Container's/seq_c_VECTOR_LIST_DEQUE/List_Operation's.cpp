#include<iostream>
#include<list>

int main()
{
    list<int> list1(3);//list with size of 3 menas 0 to 2
    std:: list<int>:: iterator iter = list1.begin();
    *iter=10;
    iter++;
    *iter=20;
    iter++;

    cout<<"The value of list is: "<<*iter;

}