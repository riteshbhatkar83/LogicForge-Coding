import java.util.Scanner;

class Digit
{
    public void DisplayDigits()                                          
    {
        int iNo = 175902;

        while (iNo != 0) 
        {
                System.out.println("Digit is  :"+(iNo % 10));                         
                iNo = iNo / 10;                                  
                System.out.println("Number is :"+ iNo);    
        }


       
    }
}

class program121
{
    public static void main(String A[])
    {
        Digit digit = new Digit();

        digit.DisplayDigits();
    }
}












































//hex = 16 = range 0 to 15
//decimal = base 10 = range 0 to 9
//binary = base 2 = range 1/0

//Num / base to divide number baki(0-9 madhe aasan);



