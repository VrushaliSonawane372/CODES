import java.util.*;

class ArrayX
{
    public int Arr[];
    int i = 0;

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
         System.out.println("Enter the  elements  : ");
         for(i = 0; i < Arr.length; i++)
         {
             Arr[i] = sobj.nextInt();
         }
    }
    public void Display()
    {
        System.out.println("Entered the  elements are : ");
        for(i = 0; i < Arr.length; i++)
         {
            System.out.println(Arr[i]);
         }
    }
    public void CountDigits()
    {
      int iDigit = 0,iCount = 0,iNo = 0;
      System.out.println("Digits");
        for(i = 0; i < Arr.length; i++)
         { 
            iNo = Arr[i];
            while(iNo != 0)
            {
                iCount++;
            
             //Arr[i] = Arr[i] / 10;
             iNo = iNo / 10;
         }
         System.out.println(iCount);
         iCount = 0;
       }
    }
}

class program264
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int  iLength = 0, i = 0,iRet = 0;

        System.out.println("Enter the number of elements  : ");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);
        aobj.Accept();
        aobj.Display();
         aobj.CountDigits();
     
       
    }
}