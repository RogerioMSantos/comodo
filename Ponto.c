/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ponto.c
 * Author: 2019109261
 * 
 * Created on 12 de Setembro de 2019, 13:55
 */

#include <math.h>
#include <stdio.h>

#include "Ponto.h"

float calcularDistancia(tPonto* p1, tPonto* p2){
    return sqrt(pow(p1->x-p2->x,2)+pow(p1->y-p2->y,2));
}
void lerPonto(tPonto* p, FILE* txt){
    fscanf(txt,"%d %d",p->x,p->y);
}
float calcularDistanciaX(tPonto* p1, tPonto* p2){
    return fabs(p1->x-p2->x);
}
float calcularDistanciaY(tPonto* p1, tPonto* p2){
    return fabs(p1->y-p2->y);
}