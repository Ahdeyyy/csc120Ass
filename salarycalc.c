/*
(Salary Calculator) Develop a program that will determine the gross pay for each of several
employees. The company pays “straight time” for the first 40 hours worked by each employee and
pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employees of the company, the number of hours each employee worked last week and the hourly rate of
each employee. Your program should input this information for each employee and should determine and display the employee's gross pay.
*/

#include <stdio.h>

int main(void)
{
    float hoursWorked;
    float hourlyRate;
    float grossPay;

    // initialize variables
    hoursWorked = 0.0;
    hourlyRate = 0.0;
    grossPay = 0.0;

    // prompt user for input with a while loop using sentinel value of -1

    while (hoursWorked != -1)
    {
        printf("Enter hours worked (-1 to end): ");
        scanf("%f", &hoursWorked);

        if (hoursWorked != -1)
        {
            printf("Enter hourly rate of the employee ($00.00): ");
            scanf("%f", &hourlyRate);

            // calculate gross pay
            if (hoursWorked <= 40)
            {
                grossPay = hoursWorked * hourlyRate;
            }
            else
            {
                grossPay = (40 * hourlyRate) + ((hoursWorked - 40) * (hourlyRate * 1.5));
            }

            // display the gross pay
            printf("Gross pay is: $%.2f\n", grossPay);
        }
    }

    return 0;

}
    