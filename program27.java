import java.util.Scanner;

class program24
{
    public static void main(String A[])
    {   Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0;  //Error
        

        
        scanner = new Scanner(System.in);

        System.out.println("Enter Your name :");
        sName = scanner.next();

        System.out.println("Enter Your Age :");
        iAge = scanner.nextInt();

        System.out.println("Enter Your Marks");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome " + sName );
        System.out.println("Your Age Is " + iAge );
        System.out.println("Your Marks Is " + fMarks );

    }
}


//24 che cpoy
//due to 0.0
// program27.java:9: error: incompatible types: possible lossy conversion from double to float
//         float fMarks = 0.0;
//                        ^
// 1 error
// error: compilation failed