#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{   
    if(iNo % 3 == 0)
    {

        if(iNo % 5 == 0)
        {
            printf("Number is Divisible\n");
        }
        else
        {
            printf("Number is not Divisible\n");
        }
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


//85 che copy













//int inv giv optin to intervier=wer code 87 first then code 86