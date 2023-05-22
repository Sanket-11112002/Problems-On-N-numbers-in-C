// Accept N number from user and accept one another number as NO, return index of last occurence of that NO.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;   
        }
    }
    if(iCnt == -1)
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

    iRet = LastOcc(ptr, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("Last occurence of number is %d\n",iRet);
    }
    
     free(ptr);

    return 0;
}