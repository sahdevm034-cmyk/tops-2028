#include <stdio.h>

void main(){
    int age;
    printf("enter the age");
    scanf("%d",&age);

    switch(age>=18){
        case1:
        printf("you are the vaild\n");
        break;

        default:
        printf("invaild\n");
        break;
    }
    switch(age>60){
        case2:
        printf("you are vaild but senior cityzen\n");
        break;

        default:
        printf("invaild\n");
        break;
    }
    switch(age<17){
        case3:
        printf("you are the not vaild\n");
        break;

        default:
        printf("invaild\n");
        break;
    }
}