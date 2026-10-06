/*
    step 1 : Under Stand The Problem Statement
    step 2 : Write The Algorithm
    step 3 : Decide The Programming Language
    step 4 : Write The Program
    step 5 : Test The Program

*/

////////////////////////////////////////////////////////////////
//
//  Step 1 : Under Stand The Problem Statement
//           User is going to enter any two integer
//           And we have to proform addition
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//  Step 2 : Write The Algorithm
/*
    START
        Accept first number as No1
        Accept first number as No2
        Create the Variable as Ans as to store the result
        Perform the addition and store into  Ans
        Dispaly the result in Ans
    END

*/
//
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//  step 3 : Decide The Programming Language
//           =>We Decide the C programming
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//  step 4 : Write The Program
//
////////////////////////////////////////////////////////////////


#include<stdio.h>

//shopAt licence
////////////////////////////////////////////////////////////////
//  
//  Function Name     : Addition
//  Input             : Integer, Integer
//  Output            : Integer
//  Description       : Performs addition
//  Date              : 04/10/2026 -> 07/10/2026
//  Author            : Ritesh Vasantrao Bhatkar       
//
////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns = 0 ;

    iAns = iNo1 + iNo2;    //Business logic

    return iAns;
} 

////////////////////////////////////////////////////////////////
//
//  Entry Point Of Application 
//
////////////////////////////////////////////////////////////////

int main()
{   
    int iValue1 = 0, iValue2 = 0, iResult = 0 ;

    printf("Enter first Number : \n ");
    scanf("%d", &iValue1);

    printf("Enter Second Number : \n ");
    scanf("%d", &iValue2);
    
    iResult = Addition(iValue1 , iValue2);       

    printf("Addition is : %d\n", iResult );
    return 0;
}

////////////////////////////////////////////////////////////////
//
//      step 5 : Test The Program
//-------------------------------------------------------------
//      Tested      Input1      Input2      Output
//-------------------------------------------------------------
//      1            11           12          23
//      2            11           0         
//      3            0            11
//      4            20           -9
//      5           -20            9
//      6           -20           -9
//
////////////////////////////////////////////////////////////////


//_Header
//_ShopAtLicence

