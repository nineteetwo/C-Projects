#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef float numara;
typedef char String[50];
void dogumgunu(int* yas);
//enum Day{PAZAR, PZT, SALI, CARSAMBA, PERSEMBE, CUMA, CMT};
//karamasiklastiricam simdi
typedef enum{PAZAR=7, PZT=1, SAL=2, CARSAMB3, PERSEMBE=4, CUMA=5, CMT=6} Day;
//indexleri manuel belirledim ve her seferinde enum yazmiyoruz
struct Student {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
};
//bildigin oop amk

int main() {
    int x =0;
    int y = 1;
    int max = (x>y) ? x:y;
    // x ve y'den hangisi buyukse o max olsun demek
    printf("%d\n",max);
        //--typedef--//
    //float'in ismini numara ile degistirdim
    //ve string class'ini yaptim. Yani array de yapilabiliyor
    numara z = 5.0;
    printf("%f\n", z);
        //--enum'lar--//
    Day today = PAZAR;
    printf("%d\n", today);
    //indexini bastiriyor yani array gibi
        //--STRUCT'LAR--\\//
 struct Student Hasan = {"hasan",20, 5.0, true};
    printf("%s\n", Hasan.name);
        //STRUCT'LAR ILE ARRAY'LER\\//
    struct Student Ogrenciler[] ={{"dusuf",20, 5.0, true},{"mehemt",20, 5.0, true},{"hasan",20, 5.0, true}};
    for (int i =0; i<(sizeof(Ogrenciler)/sizeof(Ogrenciler[i]));i++) {
        printf("%s\n",Ogrenciler[i].name);
    }
        //pointerlar
    int yas = 25;
    int *poyintir = &yas;
    printf("%d\n",yas);
    printf("%p\n",&yas);
    printf("%p\n",poyintir);
    dogumgunu(poyintir);//pass by referance
    printf("%d\n",yas);
        //--DOSYAYA YAZMAK/OKUMAK--//
    char text[]= "merhaba.\n";
    FILE *pFile = fopen("BU.txt", "w");
    fprintf(pFile,"%s", text);

    fclose(pFile);
   pFile = fopen("BU.txt", "r");
    char buffer[1024]={0};
    while (fgets(buffer,sizeof(buffer),pFile)!=NULL) {
        printf("%s",buffer);
    }
        //--MALLOC--//
    int number =0;
    printf("Kac tane not gireceksin:\n");
    scanf("%d",&number);
    char *grades = malloc(number*sizeof(char));
    for (int i=0; i<number;i++) {
        printf("%d inci notu gir \n", i+1);
        scanf(" %c", &grades[i]);
    }
    free(grades);
        //--CALLOC--//
    // mantik olarak malloc'tan ayni sadece kullanmadan once o
    // adresteki verileri 0'lar. Bu yuzden daha guvenli ama daha
    // yavastir. Ayrica kullanim farki da var.
    int nummara =0;
    printf("Kac tane numara gireceksin:\n");
    scanf("%d",&nummara);
    int *numaralar = calloc(nummara, sizeof(int));
    for (int i=0; i<nummara;i++) {
        printf("%d inci numarya gir \n", i+1);
        scanf(" %d", &numaralar[i]);
        printf("%d",numaralar[i]);
    }
    free(numaralar);
    //REALLOC//
    //tekrardan alan artirmayi falan sagkar
    int *yeni = realloc(numaralar, 500*sizeof(int));
    //verileri de kopyalar

}
void dogumgunu(int* yas) {
    (*yas)++;
}