// Accept N numbers from user and return difference between summation of even elements summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int SumEven = 0;
    int SumOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            SumEven = SumEven + Arr[iCnt];
        }
        else
        {
            SumOdd = SumOdd + Arr[iCnt]; 
        }
    }

    return (SumEven - SumOdd);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d Eelements \n", iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements : %d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Result is %d \n",iRet);
    free(p);

    return 0;
}