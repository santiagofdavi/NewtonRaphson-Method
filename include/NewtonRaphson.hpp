/* NEWTON-RAPHSON METHOD IN C++  

Created using the F.F.CAMPOS' Algotithm in "Algoritmos Numéricos", LTC 3rd

Author: Davi Ferreira Santiago
    School of Engineering, Universidade Federal de Minas Gerais
Date: February 1st, 2022 */

#ifndef NEWTONRAPHSON_H
#define NEWTONRAPHSON_H

double precisao_maquina();

double avaliacao_funcao(const double &x);

double avaliacao_derivada_funcao(const double &x);

void print(const double &x, const double &Fx, const double &DFx, 
           const double &deltax, const unsigned &k);

void print_final(const double &x, const double &Fx, const double &DFx, 
                 const unsigned &k);

void newton_raphson(double &x, double &Toler, unsigned &IterMax);

#endif