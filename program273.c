/*     input 5
        output: 1 2 3 4 5 
*/

#include<stdio.h>

void DisplayI(int iNo)
{      
    static int iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        
    }  
}

int main()
{

   int iValue = 0;
   
   printf("Enter number ..\n");
   scanf("%d",&iValue);

    DisplayI(iValue);
   

    return 0;
}