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

int Addition(int iNo1, int iNo2)
{
    int iAns = 0 ;

    iAns = iNo1 + iNo2;    //Business logic

    return iAns;
} 

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

//_dont put your business logic in main fun
//_your busniss logic should be reusable
//_it should be in Helper section ,ex-electrication man and son son is helper
//_in Helper - dont comunicate with end user dont write any IO- printf sacnf

//_filter - example, cash note- cut cach -take 
//_updater - example, note stick and pass