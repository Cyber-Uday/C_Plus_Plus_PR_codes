#include<iostream>
using namespace std;
int main()
{
    //mention all the thing which required 
    int n=5;
    int row=1;
    int star=1;

    while(row<=n)//1<5 yes
    {
        //star
        int i=0; //0
        while (i<star) //0<1 yes
        {
            cout<<" * ";
            i++;
        }
        
        //next row prep
        row++;
        star++;
        cout<<endl;
    }

}