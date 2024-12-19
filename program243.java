/*input : 8830428
output : 0 -> 1
         2 -> 1
         3 -> 1
         4 -> 1
         8 -> 3
         incomplete  */

import java.util.*;

class Digits
{
     public int CountDigits(int iNo)
     {
        int iDigit = 0,iAdd = 0;
        while(iNo != 0)
        {
           iDigit = iNo % 10;
            iAdd = iAdd + iDigit;
            iNo = iNo / 10;
        }
         return iAdd;
     }
}

class program243
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int  iValue = 0, iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

       Digits cobj = new Digits();

        iRet = cobj.CountDigits(iValue);

        System.out.println("Count of digits : "+iRet);
    }

}