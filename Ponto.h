/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ponto.h
 * Author: 2019109261
 *
 * Created on 12 de Setembro de 2019, 13:55
 */

#ifndef PONTO_H
#define PONTO_H
typedef struct ponto{
    int x;
    int y;
}tPonto;
float calcularDistancia(tPonto*, tPonto*);
void lerPonto(tPonto *, FILE *);
float calcularDistanciaX(tPonto *,tPonto*);
float calcularDistanciaY(tPonto *,tPonto*);
void escreverPonto(tPonto *);
#endif /* PONTO_H */
