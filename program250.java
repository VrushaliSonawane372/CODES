/*input : 5550428 count 0-9 
output :  */

import java.util.*;

class Digits
{
     public void CountDigits(int iNo)
     {
        int iDigit = 0;
        int iCount[] = {0,0,0,0,0,0,0,0,0,0};
        while(iNo != 0)
        {
           iDigit = iNo % 10;
           
            if(iDigit == 0)
            {
                iCount[0]++;
            }
           else if(iDigit == 1)
            {
                iCount[1]++;
            }
            else if(iDigit == 2)
            {
                iCount[2]++;
            }
            else if(iDigit == 3)
            {
                iCount[3]++;
            }
            else if(iDigit == 4)
            {
                iCount[4]++;
            }
            else if(iDigit == 5)
            {
                iCount[5]++;
            }
            else if(iDigit == 6)
            {
                iCount[6]++;
            }
            else if(iDigit == 7)
            {
                iCount[7]++;
            }
            else if(iDigit == 8)
            {
                iCount[8]++;
            }
            else if(iDigit == 9)
            {
                iCount[9]++;
            }

            iNo = iNo / 10;
        }
     
        System.out.println("Frequency of 0 : "+iCount[0]);
        System.out.println("Frequency of 1 : "+iCount[1]);
        System.out.println("Frequency of 2 : "+iCount[2]);
        System.out.println("Frequency of 3 : "+iCount[3]);
        System.out.println("Frequency of 4 : "+iCount[4]);
        System.out.println("Frequency of 5 : "+iCount[5]);
        System.out.println("Frequency of 6 : "+iCount[6]);
        System.out.println("Frequency of 7 : "+iCount[7]);
        System.out.println("Frequency of 8 : "+iCount[8]);
        //System.out.println("Frequency of 9 : "+iCount[9]);
       
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