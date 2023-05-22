/*
4. We have to design application for tourist company. 
Tourist company provides cars on rent. 
Depends on the running of car they apply rent. 
If running is less than 100 kilometres then they charge 25 rupees per kilometre . 
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after 
100 kilometres. 
We have to accept number of kilometres from user and return the estimated rent.
Input : 73 Output : 1825
Input : 132 Output : 2980
Input : 189 Output : 3835
Function prototype :
int TouristBill(int iKilometer)
{
// Logic
}

*/
#include<stdio.h>

int TouristBill(int iKilometer)
{
    if(iKilometer < 100)
    {
        return iKilometer * 25;
    }
    else
    {
        return (2500 + (iKilometer-100 ) * 15);
    }
      
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Total Kilometer:\n");
   scanf("%d",&iValue);

   iRet = TouristBill(iValue);

   printf("Turist Bill:%d\n",iRet);

   return 0;
}