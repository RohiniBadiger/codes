//Write a program which checks whether number is even or odd.


#include<stdio.h>    //for printf and scanf
#include <stdbool.h>  // for loop data type


//////////////////////////////////////////////////////////////////////////////////////
//////////////
// Funcunction name  : CheckEvenOdd
//  Input :     Integer
//  Output :    Boolean
//  Description : Checks whether input is even or odd
//  Author :    Rohini Raju Badiger
//  Date  :  25 /04/2023
//  Update :  26 /04/2023
//
/////////////////////////////////////////////////////////////////////////
///////////////////////
 bool CheckEvenOdd(int iNo)
 {
     if ((iNo %2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
 }
 /////////////////////////////////////////////////////////////////////////////////////////
 //////////////////////////////////////////////
 // Entry point function
 /////////////////////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////
  int main()
  {

   int iValue =0;   //variable to accept input
   bool bRet =false;  //variable to accept return value


   printf("please enter number to check whether it is even or odd:\n");
   scanf ("%d",&iValue);


   bRet = CheckEvenOdd(iValue);  //function call

   if (bRet == true)
{
      printf("%d is even number \n",iValue);
}
 else
 {
    printf ("%d  is odd number\n",iValue);
 }
 return 0;
  }