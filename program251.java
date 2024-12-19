/*input : 5550428 count 0-9 
output :  */

import java.util.*;

class Digits
{
     public void CountDigits(int iNo)
     {
        int iDigit = 0,i = 0;
        int iCount[] = {0,0,0,0,0,0,0,0,0,0};
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount[iDigit]++; 
            iNo = iNo / 10;
        }
        for(i = 0; i <= 9;i++)
        {
        System.out.println("Frequency of "+i+" is : "+iCount[i]);
       
     }  
     }
}

class program251
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int  iValue = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

       Digits cobj = new Digits();

        cobj.CountDigits(iValue);

        //System.out.println("Count of digits : "+iRet);
    }

}