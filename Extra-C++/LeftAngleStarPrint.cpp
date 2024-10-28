#include<iostream>
using namespace std;
class StarPrint
{
    public:
    //declare needed details:> 
   
    int num=5;
    int row=1;
    int star=1;
    int space=num-1;
    void display()
    {
       while(row<=num)
       {
         //space
        int i=0;
        while(i<space)
        {
            cout<<"  ";
            i++;
        }
        //star
        int j=0;
        while(j<star)
        {
            cout<<" *";
            j++;
        }
        //next row prep
        row++;
        cout<<endl;
        star++;
        space--;
       }

    }
};
int main()
{
    StarPrint sp;
    sp.display();
}