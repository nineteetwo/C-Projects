#include <stdio.h>
#include <math.h>
int fayiz() {
    int anapara;
    int faizOranint;
    int faizTekrari;
    int yilSayisi;
    printf("kac liran oldu \n");
    scanf("%d",&anapara);
    printf("kactan verdiler faizi \n");
    scanf("%d",&faizOranint);
    float faizOrani=(float)faizOranint/100;
    printf("1 senede kac defa anaparaya ekleme yapilacak \n");
    scanf("%d",&faizTekrari);
    printf("kac senelik anlastin la \n");
    scanf("%d",&yilSayisi);
    float babapara = anapara*pow((1+faizOrani/faizTekrari), faizTekrari*yilSayisi);
    printf("%f",babapara);
    return 0;
}