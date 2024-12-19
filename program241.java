/*Accept one number from user and return multiplication of its digits */

import java.util.*;

class Digits
{
     public int MultiplicationDigits(int iNo)
     {
        int iDigit = 0, iMult = 1;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
         return iMult;
     }
}

class program241
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int  iValue = 0, iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

       Digits dobj = new Digits();

        iRet = dobj.MultiplicationDigits(iValue);

        System.out.println("Multiplication of digits : "+iRet);
    }

}