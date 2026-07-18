
#include <stdio.h>

int main()
{
    int i, j, n;
    int value;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        value = 1;

        // Print spaces
        for(j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        // Print values
        for(j = 0; j <= i; j++)
        {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
