#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //using the constructor
    /* ifstream read("Helo.txt");
    string str;
    getline(read, str);
    cout<<"The data which is read from file is: "<<str<<endl;

    ifstream read1("write.txt");
    string str1;
    read1>>str1;
    cout<<"THE Write.txt files shows this data :> "<<str1;
    read.close();
    return 0; */

    //using member functionn
        ifstream read ;
        read.open("Helo.txt");
        string str;
         /*read>>str; //here we get ouput Only Welcome 
       or*/
    getline(read,str);//here we get hole line as a output 
        cout<<"The string is :> "<<str<<endl;
        cerr<<"Next time avoid all this things";//this cerr stream is use full to show error 
}
