/*

3. Design application for school management system. 
As school is primary there are 4 standards from 1 to 4. 
School fees of each standard is different. 
For first standard fees are 8900, for second standard 12790, for third standard 21000 and 
for fourth standard fees are 23450. 
We have to accept standard from user and display the corresponding fees.

Input : 2 Output : 12790
Input : 4 Output : 23450
Input : 6 Output : Wrong input
Function prototype :
int SchoolFees(int iStandard)
{
// Logic
}

*/
#include<stdio.h>

int SchoolFees(int iStandard)
{
    if(iStandard < 0)
    {
        iStandard = -iStandard;
    }
    if(iStandard == 1)
    {
        return 8900;
    }
    else if(iStandard == 2)
    {
        return 12790;
    }
    else if(iStandard == 3)
    {
        return 21000;
    }
    else if(iStandard == 4)
    {
        return 23450;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter standard:\n");
    scanf("%d",&iValue);

    iRet = SchoolFees(iValue);
    if(iRet == 0)
    {
        printf("Wrong Input\n");
    }
    else
    {
        printf("Fees Are:%d\n",iRet);
    }

    return 0;
}