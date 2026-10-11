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
        sName = scanner.next();                        //Exception

        System.out.println("Enter Your Age :");
        iAge = scanner.nextInt();

        System.out.println("Enter Your Marks");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome " + sName );
        System.out.println("Your Age Is " + iAge );
        System.out.println("Your Marks Is " + fMarks );

    }
}


//0.0 ->

//exception
// Enter Your name :
// Ritesh Vasantrao Bhatkar
// Enter Your Age :
// Exception in thread "main" java.util.InputMismatchException
//         at java.base/java.util.Scanner.throwFor(Scanner.java:977)
//         at java.base/java.util.Scanner.next(Scanner.java:1632)
//         at java.base/java.util.Scanner.nextInt(Scanner.java:2297)
//         at java.base/java.util.Scanner.nextInt(Scanner.java:2251)
//         at program28.main(program28.java:19)

//due to buffer store Vasantrao bahatkar