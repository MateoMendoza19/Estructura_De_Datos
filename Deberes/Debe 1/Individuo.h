/***********************************************************************
 * Module:  Individuo.h
 * Author:  Samir
 * Modified: jueves, 27 de octubre de 2022 20:28:41
 * Purpose: Declaration of the class Individuo
 ***********************************************************************/

#if !defined(__Individuo_UML2_Individuo_h)
#define __Individuo_UML2_Individuo_h
#include <cstring>
#include <iostream>

using namespace std;

class Individuo
{
public:
   int getAnio(void);
   void setAnio(int newAnio);
   int getMes(void);
   void setMes(int newMes);
   int getDia(void);
   void setDia(int newDia);
   string getNombre(void);
   void setNombre(string newNombre);
   Individuo(string nom, int dia, int mes, int ano, int anioA);
   ~Individuo();
   int getAnioA(void);
   void setAnioA(int newAnioA);
   int calcularEdad(int anioN, int anioA);
   void imprimirObj(Individuo obj);

protected:
private:
   
   string nombre;
   int dia;
   int mes;
   int anio;
   int anioA;
   int edad;


};

#endif