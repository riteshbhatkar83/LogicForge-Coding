#include<stdio.h>
#include<stdlib.h>

int Summation(int iNO)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNO ; iCnt++)
    {
        iSum = iSum * iCnt;
    }


    return iSum;
    

}
int main()
{   
    int iValue = 0;

    printf ("ENTER THE FREQ :\n" );
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = Summation(iValue);

    printf("%d\n",iRet);
    return EXIT_SUCCESS;
}

