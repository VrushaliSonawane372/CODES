/*     * * * *  
*/

#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;    //storage class static

    if(iCnt <= 4)
    {
        printf("*\n");
        iCnt++;
        DisplayR();     //Recursive call
    }  
}

int main()
{
    printf("Inside main..\n");
    DisplayR();
    printf("End of main..\n");
    

    return 0;
}