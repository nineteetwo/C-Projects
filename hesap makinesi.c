#include <stdio.h>
#include <math.h>
int meyin() {
    //kurorno hesaplorno
    float pi = 3.14;
    float yarrrricap;
    printf("YARRRRRRRRRRRRRRRICAPI GIR\n");
    scanf("%f", &yarrrricap);
    float alan = pow(yarrrricap,2)*pi;
    float yuzeyalan = alan*4;
    float hacim= yarrrricap*yuzeyalan/3;
    printf("ALLLAN ESITTIR %f \n",alan );
    printf("YUZEY ALANI ESITMIS %f \n", yuzeyalan);
    printf("hocim esit degil! %f \n", hacim);
    return 0;
}