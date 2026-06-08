#include <stdio.h>
int main() {
    char sorular[4][100] = {"Türkiye Cumhuriyeti'nin kurucusu kimdir?",
        "Türkiye Cumhuriyeti hangi yılda kurulmuştur?",
        "Istanbul hangi yilda fethedildi?",
        "Osmanli kendini hangi padisahtan itibaren 3. Roma ilan etti?"};
    char siklar[4][4][100]={{"Mustafa Kemal Atatürk", "İsmet İnönü", "Rauf Orbay", "Refet Bele"},
        {"1453","1923","1071","2023"},
        {"1453","1923","1071","1687"},
        {"Fatih Sultan Mehmet", "Yavuz Sultan Selim", "Kanuni Sultan Suleyman","Yildirim Beyazit"}
    };
    char secenekler[4] = {'A','B','C','D'};
    char cevaplar[4] = {'A','B','A','A'};
    int sayac =0;
    char input[4]= {0};
    for (int i =0; i<4; i++) {
        printf("%s\n",sorular[i]);
        for (int j =0; j<4; j++) {
            printf("%c %s \n",secenekler[j],siklar[i][j]);


        }
        scanf(" %c", &input[i]);
        if (input[i]==cevaplar[i]) {
            sayac++;
            printf("dogru\n");
        }
        else {
            printf("yanlis\n");
        }
    }


}