//write a program which accepts the marks and display  class accordingly
//  0 to 34     fail
// 35 to 49     pass class
// 50 to 59     first class
// 60 to 74     second class
// 75 to 100    first clas with deistinction

#include <stdio.h>  //for printf and sacnf

void DisplayClass(float fMarks)
{
 if((fMarks <0.0f) || (fMarks>100.00f))  //filter
{

    printf("Invalid Input\n");
    printf("Please enter the marks in between the range 0to 100");
    return;
}
 if ((fMarks>=0.0f)&& (fMarks< 35.00f))
 {
    printf("You are fail\n");
 }
  else if((fMarks>=35.00f)&&(fMarks<50.00f))
  {
    printf("You got pass class\n");
  }
  else if((fMarks>=50.00f)&&(fMarks<60.00f))
  {
    printf("You got second pass class\n");
  }
else if((fMarks>=60.00f)&&(fMarks<75.00f))
{
    printf("You got first pass class\n");
}
else if((fMarks>=75.00f)&&(fMarks<100.00f))
{
 printf("You got first pass class  with destinction\n");
}
}

int main()
{
float fValue =0.0f;
printf ("Please enter your percentage:\n");
scanf("%f",&fValue);
DisplayClass(fValue);
return 0;
}