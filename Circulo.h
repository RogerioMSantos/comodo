/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circulo.h
 * Author: 2019109261
 *
 * Created on 12 de Setembro de 2019, 13:45
 */

#ifndef CIRCULO_H
#define CIRCULO_H
#include <stdio.h>
typedef struct circulo tCirculo;
void lerCirculo(tCirculo *, FILE *txt);
float calcularPerimetro(tCirculo *);
void escreverCirculo(tCirculo *);
float calcularArea(tCirculo *);
#endif /* CIRCULO_H */
