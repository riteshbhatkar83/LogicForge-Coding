#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNO ; iCnt + 2)
    {
        printf("%d\t",iCnt );
        
    }

    printf("\n");
    

}
int main()
{   
    int iValue = 0;

    printf ("ENTER THE FREQ :\n" );
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}