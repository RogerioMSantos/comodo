/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circulo.c
 * Author: 2019109261
 * 
 * Created on 12 de Setembro de 2019, 13:45
 */

#include <math.h>
#include <stdio.h>

#include "Circulo.h"
#include "Ponto.h"
#define PI 3.14159265359
struct circulo{
    tPonto origem;
    int raio;
};
void lerCirculo(tCirculo* c,FILE* txt){
    lerPonto(&c->origem, txt);
    fscanf(txt, "%d", &c->raio);
}
float calcularPerimetro(tCirculo* c){
    return 2*PI*c->raio;
}
void escreverCirculo(tCirculo* c){
    printf("Circulo :\n");
    printf("Raio: %d\n",c->raio);
    escreverPonto(&c->origem);
    
}
float calcularArea(tCirculo* c){
    return pow(c->raio,2)*PI;
}