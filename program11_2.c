// Accept N number from user and accept one another number as NO, return index of occurence of that NO.

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the Number of elements\n");
    scanf("%d",&iSize);

    printf("Enter Number\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory!\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = FirstOcc(ptr, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("First occurence of number is %d\n",iRet);
    }

     free(ptr);

    return 0;
}