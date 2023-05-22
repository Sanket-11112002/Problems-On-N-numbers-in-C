/*
1. Design application for hotel. According to the management team of hotel they are giving 
discount on total bill amount of customer. 
If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500 
and more than 500 they give 10% discount. 
And if the bill amount is more than 1500 then they give 15% discount. 
Our application should accept total bill amount and depends on the discount policy we have 
to return the amount after applying discount.
Input : 1200 Output : 1080
Input : 290 Output : 290
Input : 3700 Output : 3145

Function prototype :
float CalculateBill(int iAmount)
{
   // Logic
}

*/

#include<stdio.h>

float CalculateBill(int iAmount)
{
      float fDiscount = 0.0f;

      if(iAmount < 500)
      {
         return (float) (iAmount);
      }
      else if((500 <= iAmount) && (iAmount < 1500) )
      {
         fDiscount = iAmount * (10.0 / 100.0);
         return (float) (iAmount - fDiscount);
      }
      else
      {
         fDiscount = iAmount * (15.0 / 100.0);
         return (float) (iAmount - fDiscount);
      }

}

int main()
{
   int iValue = 0;
   float fRet = 0.0f;

   printf("Enter Total Amount:\n");
   scanf("%d",&iValue);

   fRet = CalculateBill(iValue);

   printf("Amount after applying discount:%0.2f\n",fRet);

   return 0;
}