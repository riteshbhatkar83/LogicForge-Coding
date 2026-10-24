/*
---------------------------------------------
            Operator &&
---------------------------------------------
    Result      Result      Final Result
---------------------------------------------
    TRUE        TRUE        TRUE
    TRUE        FALSE       FALSE
    FALSE       TRUE        FALSE              |-  short circuit evalution
    FALSE       FALSE       FALSE              |-  short circuit evalution
---------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //Logic
    if(((iNo % 5 == 0) && (iNo % 3 == 0)))
    {
        printf("Number is Divisible by 5 and 3");
    }
    else
    {
        printf("Number is not Divisible by 5 and 3");
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);                      //call by value

    return EXIT_SUCCESS;
}


// if input is 8 
//shortcurcit evaulation
//8 ya chat gela (iNo % 5 == 0) t RESULT false aala aata code (iNo % 3 == 0) ya caht ja nar nahi