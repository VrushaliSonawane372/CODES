#include<stdio.h>

int CountEvenDigitsR(int iNo)
{      
    int iDigit = 0;
    static int iCnt = 0;

    if(iNo != 0)
    {
      iDigit = iNo % 10;
       if(iDigit % 2 == 0)
       {
         iCnt++;
       }
       iNo = iNo / 10;
       CountEvenDigitsR(iNo);
    }
   return iCnt;
}

int main()
{
   int iValue = 0,iRet = 0;

   printf("Enter number ..\n");
   scanf("%d",&iValue);

    iRet = CountEvenDigitsR(iValue);
    
    printf("Count of Even digits are : %d",iRet);
   
    return 0;
}

/*Count Digits*/