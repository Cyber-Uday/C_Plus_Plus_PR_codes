#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str="Hello uday here";
    ofstream write("write.txt");
    write<<str;
    cout<<"Writing : "<<str<<"Sucessfull";
}