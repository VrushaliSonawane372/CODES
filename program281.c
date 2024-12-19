#include<stdio.h>

int CountDigitsR(int iNo)
{      
   static int iCnt = 0;

    if(iNo != 0)
    {
       iCnt++;
       iNo = iNo / 10;
       CountDigitsR(iNo);
    }
   return iCnt;
}

int main()
{
   int iValue = 0,iRet = 0;

   printf("Enter number ..\n");
   scanf("%d",&iValue);

    iRet = CountDigitsR(iValue);
    
    printf("Number of digits are : %d",iRet);
   
    return 0;
}

/*Count Digits*/