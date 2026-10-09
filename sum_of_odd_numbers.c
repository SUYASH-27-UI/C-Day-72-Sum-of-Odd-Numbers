#include <stdio.h>

int main()
{
    int n, number;
    int sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0)
        {
            sum = sum + number;
        }
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}
