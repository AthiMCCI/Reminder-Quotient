#include<stdio.h>
int main()
{
    int div,divisor,quot,rem;
    printf("enter div");
    scanf("%d",&div);
    
    printf("enter divisor");
    scanf("%d",&divisor);

    quot = div/divisor;
    rem = div % divisor;

    printf("quot=%d \n", quot);
    printf("rem=%d",rem);
    
}