#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int bFlag = false;   

    for(iCnt = 2, bFlag = true; iCnt <= iNo/2; iCnt++)     //better than previous karat he yek dac hot ahe      
    {
        if((iNo % iCnt) == 0)               
        {
            bFlag = false;                                  
        }
    }
   return bFlag;
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

