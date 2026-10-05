#include <stdio.h>

void main(){
    //1. Arithmatic :- +,-,*,/,%
     int a =12,b=4;
    printf("add of a+b =%d\n",(a+b));
    printf("sub of a-b =%d\n",(a-b));
    printf("mult of a*b =%d\n",(a*b));
    printf("div of a/b =%d\n",(a/b));
    printf("mod of a%b =%d\n",(a%b));

    float base = 34.34;
    float hight = 3.5;
    printf("area of tringular = %f\n",base*hight/2);

    // 2.Assignment :- =,+=,-=,/=,*=
    int a =1;
    a+= 12; //a+12
    printf("a = %d\n",a);

    a-=10 ;//a-10
    printf("a =%d\n",a);

    int b=3;
    b*=3;
    printf ("b=%d\n",b);

    b/=2;
    printf("b=%d\n",b);

// 3. Unary :- ++,--
 int p = 1;
 p++; // p=p+1
 printf("p =%d\n",p);

 int r = p++;
 printf("r=%d\n",r);
 printf("p = %d\n",p);



}