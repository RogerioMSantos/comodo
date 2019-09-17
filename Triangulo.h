/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triangulo.h
 * Author: 2019109261
 *
 * Created on 12 de Setembro de 2019, 13:46
 */

#ifndef TRIANGULO_H
#define TRIANGULO_H
typedef struct triangulo tTriangulo;
void lerTriangulo(tTriangulo *,FILE);
float calcularPerimetroT(tTriangulo *);
void escreverTriangulo(tTriangulo *);
float calcularAreaT(tTriangulo *);
#endif /* TRIANGULO_H */
