#include<stdio.h>

int main(){
  float marks,percentage;

  printf("Enter Marks:");
  scanf("%f",&marks);

  printf("Enter Percentage:");
  scanf("%f",&percentage);

  if (marks>=90.0 && percentage>=70.0){
    printf("Special Scholarship");
  }
  else if (marks>=75.0 && percentage>=75.0){
    printf("eligible");
  }
  else{
    printf("Not Eligible");
  }

    return 0;
}
