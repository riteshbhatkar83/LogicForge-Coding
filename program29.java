import java.util.Scanner;

class program28
{
    public static void main(String A[])
    {   Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;  
        

        
        scanner = new Scanner(System.in);

        System.out.println("Enter Your name :");
        sName = scanner.nextLine();                        //Exception

        System.out.println("Enter Your Age :");
        iAge = scanner.nextInt();

        System.out.println("Enter Your Marks");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome " + sName );
        System.out.println("Your Age Is " + iAge );
        System.out.println("Your Marks Is " + fMarks );

    }
}


//next - next line
//Ritesh run
//Ritesh Vasantrao Bhatkar run