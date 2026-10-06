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

int main()
{   
    int iValue1 = 0, iValue2 = 0, iResult = 0 ;

    printf("Enter first Number : \n ");
    scanf("%d", &iValue1);

    printf("Enter Second Number : \n ");
    scanf("%d", &iValue2);
    
    iResult = iValue1 + iValue2;       //Business logic

    printf("Addition is : %d\n", iResult );
    return 0;
}

//_use Default value int 0, float 0.0f, double 0.0 ,pointer Null, charcter -
