#include<stdio.h>

int CountEvenDigitsI(int iNo)
{      
   int iDigit= 0,iCnt = 0;
    while(iNo != 0)
    {
      iDigit = iNo % 10;
       if(iDigit % 2 == 0)
       {
         iCnt++;
       }
       iNo = iNo / 10;
    }
   return iCnt;
}

int main()
{
   int iValue = 0,iRet = 0;

   printf("Enter number ..\n");
   scanf("%d",&iValue);

    iRet = CountEvenDigitsI(iValue);
    
    printf("Count of Even digits are : %d",iRet);
   
    return 0;
}

/*Count Digits*/