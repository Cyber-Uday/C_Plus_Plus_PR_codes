#include<iostream>
#include<fstream>;
using namespace std;
int main()
{
    ifstream read("demo.txt");
    string showdata ;
    read>>showdata;
    cout<<"THE DATA IS:> "<<showdata;
}