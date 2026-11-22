#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first angle:");
    scanf("%d", &a);

    printf("Enter second angle:");
    scanf("%d", &b);

    printf("Enter third angle:");
    scanf("%d", &c);

    if ((a + b + c) != 180 || a <= 0 || b <= 0 || c <= 0 )
       { printf("invalid");}
    else if (a < 90 && b < 90 && c < 90)
       { printf("Acute");}
    else if (a == 90 || b == 90 || c == 90)
       { printf("Right angle"); }
        
    else {
        printf("Obtuse");}

    return 0;
}
