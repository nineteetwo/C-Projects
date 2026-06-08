#include <stdio.h>
int para;

void paracek(int cekilecekPara) {
    para-= cekilecekPara;
    return;
}
void paraYatir(int yatirilacakPara) {
    para+=yatirilacakPara;
    return;
}
void ParaBak() {
    printf("paran %d kadar\n",para);
    return;
}

int main() {
    int komut = -1;
    int Mani = -1;
    while (komut != 0) {
        printf("0 cikis \n1 para yatir \n2 para cek \n3 para bak\n");
        scanf("%d", &komut);
        if (komut<0 || komut>3) {
            printf("duzgun bise gir\n");
        }
        switch (komut) {
            case 0: printf("BAY BAY"); return 0; break;
            case 1: scanf("%d",&Mani); while (Mani<0){printf("duzgun bise gir\n"); scanf("%d",&Mani);} paraYatir(Mani); break;
            case 2: scanf("%d",&Mani); while (Mani<0){printf("duzgun bise gir\n"); scanf("%d",&Mani);} paracek(Mani); break;
            case 3: ParaBak(); break;
            default: printf("HATA"); return -1; break;
        }
    }
}