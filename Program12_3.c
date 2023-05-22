//Accept N number from user and return the difference between largest and smallest number.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return (iMax - iMin);
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the Number of elements\n");
    scanf("%d",&iSize);

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

    iRet = Difference(ptr, iSize);
    printf("Difference is:%d",iRet);

    free(ptr);

    return 0;
}