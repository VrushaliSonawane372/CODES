#include<stdio.h>

int SumDigitsR(int iNo)
{      
   static int iSum = 0;

    if(iNo != 0)
    {
       iSum = iSum + (iNo % 10);
       iNo = iNo / 10;
       SumDigitsR(iNo);
    }
   return iSum;
}

int main()
{
   int iValue = 0,iRet = 0;

   printf("Enter number ..\n");
   scanf("%d",&iValue);

    iRet = SumDigitsR(iValue);
    
    printf("Sum of digits are : %d",iRet);
   
    return 0;
}

/*Count Digits*/