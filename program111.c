#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)      //istade of starting 1 write 2
    {
        if((iNo % iCnt) == 0)               
        {
            return false;                     //not a good practice to write return in loop (instruction queue chock hote,data urun rahato(Bouncer))
        }
    }
   return true;
}

int main(void)    
{   
    int iValue = 0;
    int bRet = false;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet)   
    {
        printf("It is a Prime Number\n");
    }
    else
    {
        printf("It is not a Prime Number\n");
    }


    return EXIT_SUCCESS;
}

