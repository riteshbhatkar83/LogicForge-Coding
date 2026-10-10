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
    scanf("%d", &iValue1);

    printf("Enter Second Number : \n ");
    scanf("%d", &iValue2);
    
    iResult = Addition(iValue1 , iValue2);       

    printf("Addition is : %d\n", iResult );

    return EXIT_SUCCESS;
}



//_0 indicate success,instend use EXIT_SUCCESS he Macro aahe je preprocesserc kam aahe
//_
//_kand r style