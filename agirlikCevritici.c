#include <stdio.h>
int kilo() {
    int secim =0;
    printf("[1] kilogram -> pound \n[2] pound -> kilogram \n");
    scanf("%d",&secim);
    while (secim!=1 && secim !=2) {
        printf("duzgun bise sec \n");
        scanf("%d",&secim);
    }
    printf("tamam kutleni gir\n");
    float kutle =0;
    scanf("%f", &kutle);
    if (secim ==1) {
        printf("cevrilmis hal= %f", kutle*2.20462);
    }
    else {
        printf("cevrilmis hal = %f",kutle*0.453592);
    }
    return 0;
}