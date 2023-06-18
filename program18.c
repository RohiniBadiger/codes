#include <stdio.h>

void Display(int iNo)
{
    int icnt =0;
printf("Error: invalid input\n");
printf("Note:Please enter the positive number..\n");



    for(icnt =1; icnt<=5; icnt++)
{
 printf("%d\n", icnt);
}
}


int main()
{
 int  iValue =0;
 printf("Enter thr frequency :\n");
scanf("%d",iValue);
 
 Display(iValue);
}


}

