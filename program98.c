#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULONG;            //if create a .h file it will go in header.h 

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG ifact = 0;

   

    for(iCnt = 1, ifact = 1; iCnt <= iNo; iCnt++)
    {
        ifact = ifact * iCnt;
    }
    return ifact;                                            
}

int main()
{   
    int iValue = 0;
    

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    ULONG iRet = 0 ;
    iRet = Factorial(iValue);

    printf("Factorial is : %lld\n",iRet);

    return EXIT_SUCCESS;
}

