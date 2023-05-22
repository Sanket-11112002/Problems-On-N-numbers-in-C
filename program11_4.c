// Accept N number from user and accept Range, Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
            printf("Element in Range:%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    //int iRet = 0;
    int *ptr = NULL;

    printf("Enter the Number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

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

    Range(ptr, iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}