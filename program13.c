#include<stdio.h>
#include<stdlib.h>
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

int Addition(
               int iNo1,    //First Input
               int iNo2     //Second Input
            )
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
    if(scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed Input is invalid");

        return EXIT_FAILURE;
    }

    printf("Enter Second Number : \n ");
    if(scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed Input is invalid");

        return EXIT_FAILURE;
    }
    
    iResult = Addition(iValue1 , iValue2);       

    printf("Addition is : %d\n", iResult );

    return EXIT_SUCCESS;
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

//_itha aapna testing nahi karta aahe
//_ magcahy code che concept yat lavat ahe

//_unit testing - assert - use to test function

//_ in c comp - 3 seprate file main, helper funs, prototype of header file .c .c .h example of bhel (merge file sa it required)
//_gcc prog14.c prog15.c -o Myexe 
//_kadhi pan lihi 14 ke 15 sequence dont matter
