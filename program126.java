import java.util.Scanner;

class Digit
{
    public int CountDigits(int iNo)                                          
    {
        int iDigit = 0;
        int iCount = 0;

        //updater
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while (iNo != 0) 
        {       
                iDigit = iNo % 10;              //show last digit
                iNo = iNo / 10;                //cut                   
                iCount++;         
        }   
       return  iCount;
    }
}

class program126
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









