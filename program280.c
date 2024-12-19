#include<stdio.h>

int CountDigitsI(int iNo)
{      
    int iCnt = 0;
    while(iNo != 0)
    {
       iCnt++;
       iNo = iNo / 10;
    }
    
   return iCnt;
}

int main()
{
   int iValue = 0,iRet = 0;

   printf("Enter number ..\n");
   scanf("%d",&iValue);

    iRet =CountDigitsI(iValue);
    
    printf("Number of digits are : %d",iRet);
   
    return 0;
}

/*Count Digits*/