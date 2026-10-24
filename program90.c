#include<stdio.h>
#include<stdlib.h>

int Summaton(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;          //not in the for loop
}

int main()
{   
    int iValue = 0;
    

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    int iRet = 0 ;
    iRet = Summaton(iValue);

    printf("Summation is : %d\n",iRet);

    return EXIT_SUCCESS;
}


//88