import java.util.Scanner;

class program24
{
    public static void main(String A[])
    {   
        Scanner scanner = null;
        scanner = new Scanner(System.in);

        System.out.println("Enter Your name :");
        String sName = null;
        sName = scanner.next();

        System.out.println("Welcome " + sName );

    }
}


//next only - jo parant space yet nahi
// C:\Users\rites\OneDrive\Desktop\Marvellous LB\LB>java program24.java
// Enter Your name :
// Ritesh Vasnatrao Bhatkar
// Welcome Ritesh

// C:\Users\rites\OneDrive\Desktop\Marvellous LB\LB>java program24.java
// Enter Your name :
// Ritesh_Vasantrao_Bhatkar
// Welcome Ritesh_Vasantrao_Bhatkar