#include<stdio.h>
//count capital 
int CountSmall(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;  
        }
        str++;
        CountCapital(str);
    }
    return iCnt;
}

int main()
{
   char Arr[30];
   int iRet = 0;

   printf("Enter String :\n");
   scanf("%[^'\n']s",Arr);

   iRet = CountSmall(Arr);

   printf("Count of capital : %d\n",iRet);
   
    return 0;
}

/*Count Digits*/