#include <stdio.h>

void main(){

   int choice,qty,total;

    printf("--pizza menu__\n");
    printf("1-small (Rs.150)\n");
    printf("2-medium (Rs.250)\n");
    printf("3-large (Rs.500)\n");
    printf("4-monster (Rs.700)\n");
  
    printf("option for choose\n ");
    scanf("%d", &choice);


    printf("quantity\n");
    scanf("%d", &qty);

     
   if (choice ==1){
      total= 150 *qty;
      printf("total  = Rs.%d\n",total);

      if(qty>=4){
        printf("500ml coke free");
      }

   }



      else if(choice==2){
        total = 250*qty;
        printf("total =Rs.%d\n",total);
      }

      if(qty>=5){
        printf("1ltr coke free");
      }


    }