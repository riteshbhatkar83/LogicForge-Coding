/*
---------------------------------------------
            Operator ||
---------------------------------------------
    Result      Result      Final Result
---------------------------------------------
    TRUE        TRUE        TRUE                    |-  short circuit evalution
    TRUE        FALSE       TRUE                    |-  short circuit evalution
    FALSE       TRUE        TRUE              
    FALSE       FALSE       FALSE              
---------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    
    if(((iNo % 5 == 0) || (iNo % 3 == 0)))
    {
        printf("Number is Divisible\n");
    }
    else
    {
        printf("Number is not Divisible\n");
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);                      

    return EXIT_SUCCESS;
}


// ||  -> logical OR operator
// |   -> bitwise OR operator