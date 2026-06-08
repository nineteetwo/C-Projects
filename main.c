#include <stdio.h>
#include <string.h>

int hayrr() {
    printf("meraba dunya, ismin ne?\n");
    char isim[30];
    fgets(isim, 30, stdin);
    isim[strlen(isim)-1] = '\0';
    int yas;
    printf("yas kacindasin?\n");
    scanf("%d",&yas);
    printf("%s adindaki babayigit %d yasinda\n", isim, yas);
    return 0;
}
