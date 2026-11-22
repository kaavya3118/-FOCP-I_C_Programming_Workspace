#include<stdio.h>

int main(){
    int p1,p2;

   printf("Enter Player 1 and Player 2 choices (1: Rock, 2: Paper, 3: Scissors): ");
   scanf("%d %d", &p1, &p2);
   
   if ( p1<1 || p1>3 || p2<1 || p2>3 ) {
       printf("Invalid Input\n");
   }
   else if (p1==p2) {
    printf("It's a Tie!\n");
   }
   else {
    switch(p1){
       case 1:
         if (p2==3){
         printf("p1 Wins");}
         else {
          printf("p2 Wins");
         }
         break;
       case 2:
         if (p2==1){
         printf("p1 wins");
         }
         else{
         printf("p2 wins");
         }
         break;
       case 3:
         if (p2==2){
            printf("p1 wins");
         }
         else {
            printf("p2 wins");
         }
         break;
       
       

    }
   }

    return 0;
}
