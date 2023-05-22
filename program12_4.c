//Accept N number from user and display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

int Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iCount = 0;
        int iTemp = Arr[iCnt];
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iCount++;
            iTemp = iTemp / 10;
        }
        if(iCount == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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
    printf("3 digit elements are:\n");
    Digits(ptr, iSize);

    free(ptr);

    return 0;
}