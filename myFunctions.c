//
// Created by Jack on 21/12/2024.
//

#include "myFunctions.h"
#include <stdio.h>


float trovaVotoPiuAlto(float voti[], int numeroVoti) {
    float votoPiuAlto = voti[0];
    for (int i = 1; i < numeroVoti; i++) {
        if (voti[i] > votoPiuAlto) {
            votoPiuAlto = voti[i];
        }
    }
    return votoPiuAlto;
}


int contaVotiMassimi(float voti[], int numeroVoti, float valoreMassimo) {
    int count = 0;
    for (int i = 0; i < numeroVoti; i++) {
        if (voti[i] == valoreMassimo) {
            count++;
        }
    }
    return count;
}


float calcolaMedia(float voti[], int numeroVoti) {
    float sommaVoti = 0;
    for (int i = 0; i < numeroVoti; i++) {
        sommaVoti += voti[i];
    }
    return sommaVoti / numeroVoti;
}


void determinaCrediti(float media) {
    if (media < 6.00) {
        printf("Crediti:\nNessuno\n");
    } else if (media == 6.00) {
        printf("Crediti:\n7-8\n");
    } else if (media > 6.00 && media <= 7.00) {
        printf("Crediti:\n8-9\n");
    } else if (media > 7.00 && media <= 8.00) {
        printf("Crediti:\n9-10\n");
    } else if (media > 8.00 && media <= 9.00) {
        printf("Crediti:\n10-11\n");
    } else {
        printf("Crediti:\n11-12\n");
    }
}