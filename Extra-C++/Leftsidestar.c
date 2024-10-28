#include<stdio.h>
#include<conio.h>
int main()
{
     int num=5;
    int row=1;
    int star=1;
    int space=num-1;
   
       while(row<=num)
       {
         //space
        int i=0;
        while(i<space)//0<4
        {
            printf("  ");
            i++;
        }
        //star
        int j=0;
        while(j<star)
        {
           printf(" *");
            j++;
        }
        //next row prep
        row++;
        printf("\n");
        star++;
        space--;
       }
    
    return 0;

}