#include <stdio.h>

int main()
{
    int a;
    printf("Enter Day number:");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
      printf("Monday\nWorking Day");
      break;

    case 2: 
      printf("Tuesday\nWorking Day");
      break;

    case 3:
      printf("Wednesday\nWorking Day");
      break;

    case 4:
      printf("Thursday\nWorking Day");
      break;

    case 5:
      printf("Friday\nWorking Day");
      break;

    case 6:
      printf("Saturday\nWeekend");
      break;

    case 7:
      printf("Sunday\nWeekend");
      break;

    }


    return 0;
}
