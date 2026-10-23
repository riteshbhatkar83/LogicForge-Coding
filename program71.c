#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNO ; iCnt++)
    {
        printf("%d\n",iCnt);
    }
    

}
int main()
{   
    int iValue = 0;

    printf ("ENTER THE FREQ :\n" );
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}

// ENTER THE FREQ :
// 5
// 1
// 2
// 3
// 4
// 5