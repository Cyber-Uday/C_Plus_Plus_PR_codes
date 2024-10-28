//here we implemnet the stack in Derived Container's 
#include<iostream>
#include<stack>
using namespace std;
// IMP NOTE:>  IN DERIVIED CONTAINER WE DON:T USE ITERATOR
 //we write here the display fun()

display(std::stack<int> s)
{
    int stack_size=s.size();
   for(int i=0;i<=stack_size;i++)
   {
    cout<<" "<<s.top();//here 3 we make 10,20,30  top =3 , pop >  
    s.pop();//so 
   }
}
int main()
{
    std::stack<int> s;//i will implement one integer stack and on going another things ;

    //get input from user of stack size and push elment okay
    int element,stack_size;
    cout<<"Enter the Stack size what you want:> ";
    cin>>stack_size;
    for (int i = 0; i <stack_size; i++)
    {
        cout<<" Enter an element:> "<<i<<" of this: > ";
        cin>>element;
        s.push(element);
        
    }
    display(s);
    

}