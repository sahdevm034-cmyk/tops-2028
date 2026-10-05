#include <stdio.h>

void main(){
    // 1.Arthmetic :- +,-,*,/,%
    int a =14,b = 4;
    printf("a+b= %d\n",(a+b));
    printf("a-b= %d\n",(a-b));
    printf("a*b= %d\n",(a*b));
    printf("a/b= %d\n",(a/b));
    printf("a%b= %d\n",(a%b));

    // Assignment :- =,+=,-=,/=,*=
    int a = 2;
    a+=12; //a=a+12
    printf("a= %d\n",a); 

    a-=10; // a= a-10
    printf("a= %d\n",a);

    a*=3; // a= a*3
    printf("a= %d\n",a);

    a/= 2; // a= a/2
    printf("a= %d\n",a);

}