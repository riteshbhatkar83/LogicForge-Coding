#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{   
    int iValue = 0;
    

    printf("Enter number : \n");
    scanf("%d",&iValue);
     
    int iRet = 0;
    iRet = SumFactors(iValue);

    printf("sum of Factors : %d\n",iRet);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2) 





















//factor 15 = 1 3 5 15   
//89 che copy

//dynamic = time complecity