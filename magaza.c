#include <stdio.h>
#include <string.h>
int magaza() {
    printf("ne vereyim abime \n ");
    char urun[30];
    fgets(urun, 30, stdin);
    urun[strlen(urun)-1] = '\0';
    printf("kac tane \n ");
    int miktar;
    scanf("%d", &miktar);
    printf("kac para peki bu \n");
    int para;
    scanf("%d", &para);
    printf("%s'den %d tanesini %d liraya aldi", urun, miktar, miktar*para);
    return 0;
}