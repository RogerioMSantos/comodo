/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triangulo.c
 * Author: 2019109261
 * 
 * Created on 12 de Setembro de 2019, 13:46
 */

#include <stdio.h>

#include "Triangulo.h"
#include "Ponto.h"

struct triangulo {
    tPonto p[3];
    int base;
    int altura;
};

void lerTriangulo(tTriangulo* t, FILE *txt) {
    int i;
    for (i = 0; i < 3; i++) {
        lerPonto(t->p, txt);
    }
    fscanf(txt, "%d %d", t->base, t->altura);
}

float calcularPerimetro(tTriangulo* t) {
    return calcularDistancia(t->p[0], t->p[1]) + calcularDistancia(t->p[0], t->p[2]) + calcularDistancia(t->p[1], t->p[2]);
}

float calcularArea(tTriangulo* t) {
    return (t->base * t->altura) / 2;
}

void escreverTriangulo(tTriangulo* t) {
    printf("Triangulo :\n");
    for (int x = 0; x < 3; x++)
        printf("Lado %d: %.2f\n", x+1, calcularDistancia(t->p[x]));

}