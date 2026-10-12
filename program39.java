//Approach 3
import java.util.Scanner;


class program39
{ 

    public static void main(String A[])
    {   
        Scanner scanner = null;
        Arithematic arithematic = null;    //referance

        scanner = new Scanner(System.in);

        int iValue1 = 0 ,iValue2 = 0 , iResult = 0;

        System.out.println("Enter First Number");
        iValue1 = scanner.nextInt();

        System.out.println("Enter Second Number");
        iValue2 = scanner.nextInt();

        arithematic = new Arithematic();                       //obj

        iResult = arithematic.Addition(iValue1,iValue2);         //obj.method(arguments)               

        System.out.println("Addition is : " + iResult);
        
        
    }
}

class Arithematic
{
     public int Addition(int iNo1, int iNo2)   //parameter iNO1, iNO2
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}


//create obj of class Arth


//can not find class karn pahilay calss made to main find kartto(sequence change class che)


//make packages
//