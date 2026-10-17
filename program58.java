import java.util.Scanner;
class program59
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

        //Input Filter
        if(iNO <= 0)
        {
            System.out.println("Invalid input");

            return ;                                  // we cant enter in bellow for 
        }
        for(icnt = 1; icnt <= iNO ; icnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}

//filter - fatli not geth nahi
//updater - gheto aani chipkvto






