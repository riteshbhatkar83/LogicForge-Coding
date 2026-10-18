import java.util.Scanner;
class program65
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

        for(icnt = iNO; icnt >= 1 ; icnt--)
        {            
            System.out.println("-------------");                       //static line 
            System.out.println(icnt + " Jay Ganesh...");                 //dynamic line
            System.out.println("-------------");
        }
    }
}



//62 che copy

