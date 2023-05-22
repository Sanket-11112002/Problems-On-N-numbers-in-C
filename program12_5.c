//Accept N number from user and display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

int DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iSum = 0;
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("Sumation is:%d\n",iSum);
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

    DigitsSum(ptr, iSize);

    free(ptr);

    return 0;
}