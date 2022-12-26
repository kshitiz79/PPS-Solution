

#include <stdio.h>

int main()
{
    float basic, gross, allowance;
    double hra, da, pf;
    char grade;
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);
    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;

    if (grade == 'A')
    {
        allowance = 1700;
    }
    else if (grade == 'B')
    {
        allowance = 1500;
    }
    else
    {
        allowance = 1300;
    }

    gross = basic + hra + da + allowance - pf;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}