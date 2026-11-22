#include<stdio.h>

int main(){
int a,b;
char c;
 printf("Input:");
 scanf("%d %d %c",&a,&b,&c);


 switch(c){
    case '+':
        printf("Result: %d",a+b);
        break;
    case '-':
        printf("Result: %d",a-b);
        break;
    case '*':
        printf("Result: %d",a*b);
        break;
    case '/':
        printf("Result: %d",a/b);
        break;
    case '%':
        printf("Result: %d",a%b);
        break;    
    default:
        printf("Invalid operator");
 }
 if( b==0){
    printf("Error: Division by zero is not allowed.");
    return 0;
}}
