#include<stdio.h>

int main()
{
    int firstnumber;
    int secondnumber;
    int thirdnumber;
    int total;

    printf("Please enter first number: ");
    scanf("%d", &firstnumber);
    printf("Please enter second number: ");
    scanf("%d", &secondnumber);
    printf("Please enter third number: ");
    scanf("%d", &thirdnumber);

    total = firstnumber + secondnumber + thirdnumber;

    printf("Total result is %d", total);
    return 0;

}
