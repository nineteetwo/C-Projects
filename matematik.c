#include  <stdio.h>
#include <math.h>
int mahmtcelykss() {
    float sayi =4.4;
    sayi = sqrt(sayi);//kare kokunu aliyo
    sayi = pow(sayi,3);// 4. kuvvetini aldik
    sayi = round(sayi); // en yakin degere yuvarladik
    sayi+=0.1;
    sayi = ceil(sayi);//fazla degere gore yuvarladik
    sayi-=0.1;
    sayi = floor(sayi);//dusuk degere gore yuvarladik
    sayi-=2*sayi;
    sayi = abs(sayi); //mutlak
    sayi = pow(sayi,5);
    sayi = log(sayi); //log aldik
    printf("%f \n", sayi);
    return 0;
}