#include<stdio.h>
#include<stdlib.h>

void DisplayR(int Arr[], int iSize)
{
   static int iCnt = 0;

    if(iCnt < iSize)
    {
        printf("%d\n",Arr[iCnt]);
         iCnt++;
         DisplayR(Arr,iSize);
    }
}

int main()
{
   int *ptr = NULL;
   int iLength = 0, i = 0;

   printf("Rnter number of elements : \n");
   scanf("%d",&iLength);

   ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DisplayR(ptr,iLength);
    free(ptr);
   
    return 0;
}

/*Count Digits*/