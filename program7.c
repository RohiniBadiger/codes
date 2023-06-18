//Write a program which checks whether nummber is divisible by 3 and 5


#include<stdio.h>  // for printf and scanf
#include<stdbool.h>  // for bool data type


/////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////
//  Function name :       CheckDivisible
//  Input :               Integer
//  Output :              Boolean
//  Description :         CHkecks whether input is divisible by 3 AND 5
// Author :               Rohini Raju Badiger
// Date :   25/04/2023
//
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////
bool CheckDivisible(int iNo)
{
  if (((iNo%3)==0) &&((iNo % 5)==0))
  {
     return true;
  }
   else
   {

    return false;
   }
}
///////////////////////////////////////////////////////////////////////////////
////////////////////////////
// Entry point function
//////////////////////////////////////////////////////////////////////////////
///////////////////////////


int main()
{
 int iValue =0; //variable to accept input
 bool  bRet =false; // variable  to accept return value

  printf("please enter number to check whether it is divisible by 3 AND 5:\n");
  scanf("%d",&iValue);


  bRet =CheckDivisible(iValue);  //function call

   if (bRet == true)
{
    printf("%d is comletely divisible by 3 and 5\n",iValue);
}
else
{

    printf("%d is not completely divisible  by 3 and 5\n",iValue);
}
 return 0;
}
 /*

Logic Operators
  1: Logical AND &&
  2: Logical OR ||
  --------------------------------------------------------------------------------
 Expression1        Expression2     &&     ||
----------------------------------------------------------------------------------
 true              true

true               false

false                false

true
*/