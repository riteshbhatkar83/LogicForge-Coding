#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int bFlag = true;   //flag hosted

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)           
    {
        if((iNo % iCnt) == 0)               
        {
            bFlag = false;    //flag down                               
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

//flag 1/0 => flag register  //flag bool sarkha data type ahe
//use flag -> ask without useing flag viceversa not