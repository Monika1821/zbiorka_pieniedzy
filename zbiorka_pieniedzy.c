#include <stdio.h>

struct zbiorka{
    char imie[100];
    char nazwa[100];
    int kwota;
};
int main() {
    int os,i=1;
    printf("Ile chcesz dodac osob? ");
    scanf("%d",&os);

    struct zbiorka osoby[os];
    while(i<=os){
        puts("\npodaj imie osoby: ");
        getchar();
        fgets(osoby[i].imie,100,stdin);
        puts("Podaj grupe osoby: ");
        fgets(osoby[i].nazwa,100,stdin);
        puts("Podaj kwote przeznaczona przez osobe: ");
        scanf("%d", &osoby[i].kwota);
        i++;

    }
    for(i=1;i<=os;i++){
        printf("\nDane osoby %d :\n imie: %s grupa: %s kwota: %d \n",i,osoby[i].imie,osoby[i].nazwa,osoby[i].kwota);
    }
}