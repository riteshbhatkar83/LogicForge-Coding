import java.util.Scanner;

class Digit
{
    public int CountDigits(int iNo)                                          
    {
        int iCount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while (iNo != 0) 
        {                                   //iDigit remove line
                iNo = iNo / 10;                                 
                iCount++;         
        }   
       return  iCount;
    }
}

class program127
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter Number : ");

        int iValue = scanner.nextInt();


        int iRet = digit.CountDigits(iValue);

        System.out.println("Number of digits : "+iRet);
    }
}






