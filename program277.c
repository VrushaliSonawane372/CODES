/*     input 5
        output: 5 4 3 2 1 
*/

#include<stdio.h>

void DisplayR(int iNo)
{   
   if(iNo >= 1)
    {
        printf("%d\n",iNo);
        iNo--; 
        DisplayR(iNo);   
    }  
    printf("End of DisplayR()\n");
    
}

int main()
{

   int iValue = 0;
   
   printf("Enter number ..\n");
   scanf("%d",&iValue);

    DisplayR(iValue);
   

    return 0;
}