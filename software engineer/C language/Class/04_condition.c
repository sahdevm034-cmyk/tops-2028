#include <stdio.h>

void main(){
  
   int num1,num2,num3;

  printf("value of num1=");
  scanf("%d",&num1);

  printf("value of num2=");
  scanf("%d",&num2);

  printf("value of num3=");
  scanf("%d",&num3);

  if(num1==num2==num3){
    printf("all number equal");
  }
  else if(num1==num2&&num2!=num3){
    printf("number1 and 2 equal but number 3 is not equal");
  }
  else if(num1!=num2&&num2==num3){
    printf("number 2 and 3 equal but number 1 is not equal");
  
  }

  else if(num1!=num2&&num2!=num3){
    printf("all number is not equal");

  }



}

