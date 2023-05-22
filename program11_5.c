// Accept N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMult = 1;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMult = iMult * Arr[iCnt];
            iCount++;
        }
    }
    if(iCount == 0)
    {
        return 0;
    }
    else
    {
        return iMult;
    }
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

    iRet = Product(ptr, iSize);
    printf("Product is:%d",iRet);

    free(ptr);

    return 0;
}