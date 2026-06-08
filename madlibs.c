#include <stdio.h>

int babisko() {
    char isim[50];
    char s1[50];
    char s2[50];
    char s3[50];
    char fiil[50];

    printf("isim gir\n");
    scanf("%s", &isim);
    printf("sifat gir\n");
    scanf("%s", &s1);
    printf("sifat gir\n");
    scanf("%s", &s2);
    printf("sifat gir\n");
    scanf("%s", &s3);
    printf("fiil git\n");
    scanf("%s", &fiil);
    printf("Bir sabah %s uyandiginda kendini cok %s hissediyordu.\nAynaya bakti ve \"Bugun gercekten %s bir gun olacak!\" dedi.\nDisari ciktiginda gokyuzu inanilmaz derecede %s gorunuyordu.\nBunun uzerine hic dusunmeden %s basladi.\nGunun sonunda herkes %s'in ne kadar ilginc biri oldugunu konusuyordu.", isim, s1, s2, s3, fiil, isim);
    return 0;
}
