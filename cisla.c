#include <stdio.h>

int main(void){
    char cisla[20];
    int i = 0;
    int sucet = 0;
    char premenna_na_cislo[20];

    printf("Zadaj cislo: ");
    scanf("%s", cisla);
    int dlzka = strlen(cisla);
    
    while (i < dlzka) {
        
        int premenna_na_cislo = cisla[i];
        printf("%d \n", premenna_na_cislo);

        
        sucet = sucet + premenna_na_cislo;
        premenna_na_cislo = 0;
        printf("pn %d \n", premenna_na_cislo);
        i++;


    }
    printf("sucet cisel je: %d", sucet);



}


