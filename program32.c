#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char sName[30];
    int iAge = 0;
    float fmarks = 0.0f;   //f nahi lihi la t eror name c madhe
    printf("Enter Your Name : \n");
    scanf("%[^'\n']s",sName);      // Enter remain in input Buffer

    fflush(stdin);

    printf("Enter your Age : \n");
    scanf("%d",&iAge);

    printf("Enter your Marks : \n");
    scanf("%f",&fmarks);



    printf("Welcome %s\n",sName);
    printf("Your Age is: %d\n ", iAge);
    printf("Your Marks is: %f \n", fmarks);

    return EXIT_SUCCESS;
}






//30 che copy
