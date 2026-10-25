#include<stdio.h>
#include<stdlib.h>

long long int Factorial(int iNo)
{
    int iCnt = 0;
    long long ifact = 0;

   

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
    
    long long int iRet = 0 ;
    iRet = Factorial(iValue);

    printf("Factorial is : %lld\n",iRet);

    return EXIT_SUCCESS;
}

//factorial
//91 che copy

//extendable till 8 