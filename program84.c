#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //Logic
    if((iNo % 5) == 0)
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
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

//