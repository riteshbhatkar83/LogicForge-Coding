import java.util.Scanner;
class program67
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
        icnt = 1;
        do
        {            
            System.out.println("-------------");
            System.out.println(icnt + " Jay Ganesh...");         
            System.out.println("-------------");

            icnt++;
        }while (icnt <=  iNO) ;
            
        
    }
}



//65 che copy

// Enter the frequency
// 0
// -------------
// 1 Jay Ganesh...
// -------------

//tail chaicking