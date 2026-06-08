#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int supi() {
    srand(time(NULL));
    int mainSayi = rand()%(100-1+1)+1;
    int input = -1;
    printf("1-100 arasi tuttur tutturabilirsen");
    while (input!= mainSayi) {
        scanf("%d", &input);
        if (input<mainSayi) {
            printf("cok az artir sayiyi");
        }
        else if (input>mainSayi) {
            printf("cok oldu azalt sayiyi");
        }
        else {
            printf("tuttu valla");
            return 0;
        }

    }
    return 0;
}