// Accept N number from user check whether that numbers contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int Check(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength ; iCnt++ )
    {
        if(Arr[iCnt] == 11 )
        {
            break;
        }
    }
    if(Arr[iCnt] == 11)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number of element:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory !\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check(p, iSize);
    
    if(bRet == TRUE )
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}
