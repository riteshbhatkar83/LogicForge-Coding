#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char sName[30];
    int iAge = 0;
    float fmarks = 0.0f;  
    printf("Enter Your Name : \n");
    scanf("%[^'\n']s",sName);      // Enter remain in input Buffer

    printf("Enter your Age : \n");
    scanf(" %d",&iAge);             //%d chay aadhi space takli - to juna data flusgg karto

    printf("Enter your Marks : \n");
    scanf("%f",&fmarks);



    printf("Welcome %s\n",sName);
    printf("Your Age is: %d\n ", iAge);
    printf("Your Marks is: %f \n", fmarks);

    return EXIT_SUCCESS;
}






//flush method - input Buffer madhe flush kara