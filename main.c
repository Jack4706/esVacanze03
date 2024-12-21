#include <stdio.h>
#include "myFunctions.h"

int main() {
    int numeroVoti;


    do {
        printf("Inserisci il numero di voti da inserire (1-20):\n");
        scanf("%d", &numeroVoti);
    } while (numeroVoti <= 0 || numeroVoti > 20);

    float voti[numeroVoti];

    printf("Inserisci i voti (da 2 a 10):\n");
    for (int i = 0; i < numeroVoti; i++) {
        do {
            scanf("%f", &voti[i]);
        } while (voti[i] < 2 || voti[i] > 10);
    }

    printf("\n");

    float votoPiuAlto = trovaVotoPiuAlto(voti, numeroVoti);
    printf("Il voto piu' alto e' stato: %.2f\n", votoPiuAlto);

    printf("\n");

    int numeroVotoMassimo = contaVotiMassimi(voti, numeroVoti, 10);
    printf("Hai raggiunto il voto massimo %d volte\n", numeroVotoMassimo);

    printf("\n");

    float media = calcolaMedia(voti, numeroVoti);
    printf("Media = %.2f\n", media);

    printf("\n");

    determinaCrediti(media);

    return 0;
}