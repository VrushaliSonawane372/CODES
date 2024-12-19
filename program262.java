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
    public int Maximun()
    {
      
        int iMax = Arr[0];
        for(i = 0; i < Arr.length; i++)
         {
            if(Arr[i] > iMax)
              {
                 iMax = Arr[i];

              }
         }
        return iMax;
    }
}

class program262
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
       iRet =  aobj.Maximun();
       System.out.println("Max of elements  : "+iRet);
       
    }
}