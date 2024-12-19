#include<stdio.h>
//count capital 

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
   int Brr[] = {10,20,30,40,50};

   DisplayR(Brr,5);
   
    return 0;
}

/*Count Digits*/