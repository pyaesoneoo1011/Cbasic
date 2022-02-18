#include <stdio.h>

int main()
{
    int i;
    printf("Please enter a number: ");
    scanf("%d", &i);

    switch(i)
    {
        case 0:
            printf("i is equal to 0");
            break;

        case 1:
            printf("i is equal to 1");
            break;

        case 2:
            printf("i is equal to 2");
            break;

        default:
            printf("you entered wrong number");
            break;
    }

    return 0;
}
