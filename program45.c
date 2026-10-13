#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1 , int iNo2)
{
   float fAns = 0.0f;
   fAns = ((float)iNo1 + (float)iNo2)/2;

   return fAns;
}

int main()
{   
    int iValue1 = 0, iValue2 = 0 ;
    float fResult = 0.0f;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    fResult = Average(iValue1,iValue2);

    printf("Average is : %f\n", fResult);
    
    return EXIT_SUCCESS;
}

// -> 5 / 2 → 2 (integer division)
// -> 5.0f / 2 → 2.5 (floating-point division)
// -> (float)5 / 2 → 2.5 (type casting)
