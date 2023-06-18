// Display" jay ganesh" 5  times on screen

#include<stdio.h>
void Display( int iNo)
{
int  icnt =0;
 if (iNo<0)   //filter

{
    printf( "Please Enter the positive the number...\n" );
    return ;
}

 //        1        2         3
   for( icnt =1; icnt<=iNo; icnt++)
{
    printf("jay ganesh..\n");  //4
}
}

int main()

{
    int iValue =0;
    printf("Enter the frequency of jay ganesh..\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
