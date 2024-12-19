#include<stdio.h>
//count capital 
int CountCapital(char *str)
{
  int iCnt = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
            
        }
        str++;
    }
    return iCnt;
}

int main()
{
   char Arr[30];
   int iRet = 0;

   printf("Enter String :\n");
   scanf("%[^'\n']s",Arr);

   iRet = CountCapital(Arr);

   printf("String length is : %d\n",iRet);
   
    return 0;
}

/*Count Digits*/