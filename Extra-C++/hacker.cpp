#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    /* ifstream read("demo.txt");
    string showdata;
    getline(read,showdata)c
    cout<<showdata; */
    
    string type="uday";
    ofstream write("helo.txt");
    cerr<<"this is error";
    write<<type;
    
}
