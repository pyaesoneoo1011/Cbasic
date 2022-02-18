#include <stdio.h>

int main()
{
    int i;
    printf("Please enter a number: ");
    scanf("%d", &i);

    if(i < 0)
    {
        printf("I is less than 0");
    }
    else if(i = 0)
    {
        printf("i is equal to 0");
    }
    else
    {
        printf("i is greater than 0");
    }

    return 0;
}
