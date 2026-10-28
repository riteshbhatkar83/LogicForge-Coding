#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
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
    if(iSum == iNo)
    {
        printf("It is perfect number\n");
    }
    else
    {
        printf("It is not perfect number\n");
    }
}

int main()
{   
    int iValue = 0;
    

    printf("Enter number : \n");
    scanf("%d",&iValue);
     
   CheckPerfect(iValue);
   

    return EXIT_SUCCESS;
}


//check perfect number
//Time Complexity : O(N/2) 





















//factor 15 = 1 3 5 15   
//89 che copy

//dynamic = time complecity