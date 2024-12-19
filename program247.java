/*input : 5550428 count 9
output : 9 -> 3 */

import java.util.*;

class Digits
{
     public void CountDigits(int iNo)
     {
        int iDigit = 0,iAdd = 0, iCount = 0;
        while(iNo != 0)
        {
           iDigit = iNo % 10;
            if(iDigit == 9)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        System.out.println("Frequency of 9 : "+iCount);
     }
}

class program247
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