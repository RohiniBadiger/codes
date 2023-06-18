/*
Steps to create the application

Step 1: Understand the problem statement
Step 2: Write the algorithm
Step 3: Decide the programming language
Step 4: Write the program
Step 5: Test the written program
*/

//Write a program Which performs addition of two numbers

/*
 Algorithm

 START
   Accept First Number as No1
   Accept Second Number as No2
   Create one Variable as ANS
   Perform Addition of No1 and No2
   Store the Addition  into variable Ans
   Display the value of ANS

   STOP
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////
//
// Problem Statement : Write a program Which perforams addition of two number
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////
 #include<stdio.h>
 //////////////////////////////////////////////////////////////////////////////////////////////////////
 //////////////////////////////////////
 // Function Name : Addition
 // Input : Unsigned integer ,Unsigned integer
 // Output : Unsigned integer
 // Description :  Performs addition of 2 numbers
 // Author : Rohini Raju Badiger
 // Date :  18/04/2023
 /////////////////////////////////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////
 unsigned int Addition(unsigned int iValue1,unsigned int iValue2)
 {
 unsigned int iResult =0;
 iResult  =iValue1+iValue2;
  return iResult;
 }
 /////////////////////////////////////////////////////////////////////////////////////////////////
 //////////////////////////////////////////
 // Entry Point Function
 /////////////////////////////////////////////////////////////////////////////////////////////////
 ///////////////////////////////////////

 int main()
 {
  unsigned int iNo1 =0,iNo2=0, iAns =0;

printf("Enter First number:\n");
scanf("%d",&iNo1);

printf("Enter Second number:\n");
scanf("%d",&iNo2);

iAns= Addition (iNo1,iNo2);
printf("Addition is :%d\n",iAns);

return 0;










 }