/*input : 5550428 count 5 6 7 8
output :  */

import java.util.*;

class Digits
{
     public void CountDigits(int iNo)
     {
        int iDigit = 0, iCount5 = 0,iCount6 = 0,iCount7 = 0,iCount8 = 0;
        while(iNo != 0)
        {
           iDigit = iNo % 10;
            if(iDigit == 5)
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

            iNo = iNo / 10;
        }
        System.out.println("Frequency of 5 : "+iCount5);
        System.out.println("Frequency of 6 : "+iCount6);
        System.out.println("Frequency of 7 : "+iCount7);
        System.out.println("Frequency of 8 : "+iCount8);

        
     }
}

class program248
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