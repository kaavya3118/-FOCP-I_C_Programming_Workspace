#include <stdio.h>

int main()
{
    int a, b;
    double c;

    printf("Enter PIN: ");
    scanf("%d", &a);

    if (a != 1234)
    {
        printf("Invalid PIN\n");
    }
    else
    {
        printf("Enter Amount:");
        scanf("%d", &b);

        if (b <= 0 || b % 100 != 0)
        {
            printf("Invalid Amount\n");
        }
        else
        {
            printf("Enter Balance:");
            scanf("%lf", &c);

            if (b > c)
            {
                printf("Insufficient Balance\n");
            }
            else
            {
                printf("Withdrawal Successful\n");
            }
        }
    }

    return 0;
}
