/*input : 5550428 count 0-9 
output :  */

import java.util.*;

class Digits
{
     public void CountDigits(int iNo)
     {
        int iDigit = 0;
        int iCount0 = 0,iCount1 = 0,iCount2 = 0,iCount3 = 0,iCount4 = 0, iCount5 = 0,iCount6 = 0,iCount7 = 0,iCount8 = 0,iCount9 = 0;
        while(iNo != 0)
        {
           iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iCount0++;
            }
           else if(iDigit == 1)
            {
                iCount1++;
            }
            else if(iDigit == 2)
            {
                iCount2++;
            }
            else if(iDigit == 3)
            {
                iCount3++;
            }
            else if(iDigit == 4)
            {
                iCount4++;
            }
            else if(iDigit == 5)
            {
                iCount5++;
            }
            else if(iDigit == 6)
            {
                iCount6++;
            }
            else if(iDigit == 7)
            {
                iCount7++;
            }
            else if(iDigit == 8)
            {
                iCount8++;
            }
            else if(iDigit == 9)
            {
                iCount9++;
            }

            iNo = iNo / 10;
        }
        System.out.println("Frequency of 0 : "+iCount0);
        System.out.println("Frequency of 1 : "+iCount1);
        System.out.println("Frequency of 2 : "+iCount2);
        System.out.println("Frequency of 3 : "+iCount3);
        System.out.println("Frequency of 4 : "+iCount4);
        System.out.println("Frequency of 5 : "+iCount5);
        System.out.println("Frequency of 6 : "+iCount6);
        System.out.println("Frequency of 7 : "+iCount7);
        System.out.println("Frequency of 8 : "+iCount8);
        System.out.println("Frequency of 9 : "+iCount9);
       
     }
}

class program250
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