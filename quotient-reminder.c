/*
Module: Compute-quotient-and-reminder.c

Function:
    Computing quotient and reminder of a given number.

Copyright notice:
    This file copyright (C) 2022 by
    MCCI Corporation
    3520 Krums Corners Road
    Ithaca, NY 14850
    An unpublished work. All rights reserved.
    This file is proprietary information, and may not be disclosed or
    copied without the prior permission of MCCI Corporation.

Author:
    Athisankar, MCCI Corporation   May 2022
*/

#include <stdio.h>

/*********************************************\
|
|   Code.
|
\*********************************************/

int main()
    {
    printf("\n");
    printf("*********************************************\n");
    printf("THIS IS QUOTIENT and REMINDER v1.0.0\n");
    printf("*********************************************\n");
    printf("\n");
    printf("IT IS USED TO FIND QUOTIENT AND REMINDER \n \n");

    int div, divisor, quot, rem;

    printf("ENTER DIV");
    scanf("%d",&div);

    printf("enter DIVISOR");
    scanf("%d",&divisor);

    quot = div/divisor;
    rem = div % divisor;

    printf("\n \n******************************************\n");
    printf("quot=%d \n", quot);
    printf("rem=%d",rem);

    return 0;
    }