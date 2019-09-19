/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   forma.c
 * Author: 2019109261
 * 
 * Created on 16 de Setembro de 2019, 16:23
 */

#include "Forma.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
union forma{
    tCirculo circulo;
    tQuadrado quadrado;
    tTriangulo triangulo;
};