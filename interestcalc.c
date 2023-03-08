/*
                        (Interest Calculator)
The simple interest on a loan is calculated by the formula
interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, and therefore includes the
division by 365 (days). Develop a program that will input principal, rate and days for several
loans, and will calculate and display the simple interest for each loan, using the preceding formula.
*/

#include <stdio.h>

int main(void)
{
    float principal;
    float rate;
    float days;
    float interest;

    // initialize variables
    principal = 0.0;
    rate = 0.0;
    days = 0.0;
    interest = 0.0;

    // prompt user for input with a while loop using sentinel value of -1
    while (principal != -1)
    {
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);

        if (principal != -1)
        {
            printf("Enter interest rate (as a decimal) : ");
            scanf("%f", &rate);

            printf("Enter terms of loan in days : ");
            scanf("%f", &days);

            // calculate interest
            interest = principal * rate * days / 365;

            // display the interest
            printf("The interest charge is: $%.2f\n", interest);
        }
    }

    return 0;

}