#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factor of  %d are :\n",iNo);
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;
    

    printf("Enter number : \n");
    scanf("%d",&iValue);
     
    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2) 





















//factor 15 = 1 3 5 15   
//89 che copy

//dynamic = time complecity