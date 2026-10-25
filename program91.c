#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0, ifact = 0;

    ifact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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
    
    int iRet = 0 ;
    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return EXIT_SUCCESS;
}

//factorial
//90 che copy