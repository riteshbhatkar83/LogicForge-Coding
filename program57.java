import java.util.Scanner;
class program56
{   
    

    public static void main(String A[])
    {   
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;
        

        Iteration iteration = new Iteration();

        System.out.println("Enter the frequency");
        iValue = scanner.nextInt();

        iteration.Display(iValue);
    }
}

class Iteration
{
    
    public void Display(int iNO)
    {
        int icnt = 0;

        for(icnt = 1; icnt <= iNO ; icnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}

//making dynamic for  ---by scanner
//accept from main

//-3 -> kahi nahi print karat 
// C:\Users\rites\OneDrive\Desktop\Marvellous LB\LB>java program57.java
// Enter the frequency
// -3

// C:\Users\rites\OneDrive\Desktop\Marvellous LB\LB>


