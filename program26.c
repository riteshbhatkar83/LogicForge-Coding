#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char sName[30];
    printf("Enter Your Name : \n");
    scanf("%[^'\n']s",sName);

    printf("Welcome %s\n",sName);


    return EXIT_SUCCESS;
}






//manga fakta Ritesh print hota aata full name
//regular expression - "%[^'\n']s" - jo parat user enter dabat nahi to parant

// Enter Your Name :
// Ritesh Vasantrao Bhatkar
// Welcome Ritesh Vasantrao Bhatkar