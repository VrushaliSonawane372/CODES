/*     input 5
        output: 5 4 3 2 1 
*/

#include<stdio.h>

void DisplayI(int iNo)
{       
   while(iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;    
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