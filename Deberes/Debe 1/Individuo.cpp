/***********************************************************************
 * Module:  Individuo.cpp
 * Author:  Samir Mideros, Mateo Mendoza
 * Modified: Jueves, 27 de octubre de 2022 20:28:41
 * Purpose: Implementation of the class Individuo
 ***********************************************************************/

#include "Individuo.h"
#include <iostream>
#include <cstring>
#include <conio.h>


int Individuo::getAnio(void)
{
   return anio;
}


void Individuo::setAnio(int newAnio)
{
   anio = newAnio;
}


int Individuo::getMes(void)
{
   return mes;
}



void Individuo::setMes(int newMes)
{
   mes = newMes;
}


int Individuo::getDia(void)
{
   return dia;
}


void Individuo::setDia(int newDia)
{
   dia = newDia;
}


string Individuo::getNombre(void)
{
   return nombre;
}


void Individuo::setNombre(string newNombre)
{
   nombre = newNombre;
}


Individuo::Individuo(string nom, int dia, int mes, int anio, int anioA)
{
   this->nombre=nom;
   this->dia=dia;
   this->mes=mes;
   this->anio=anio;
   this->anioA=anioA;

}


Individuo::~Individuo()
{
   
}


int Individuo::getAnioA(void)
{
   return anioA;
}


void Individuo::setAnioA(int newAnioA)
{
   anioA = newAnioA;
}


int Individuo::calcularEdad(int anio, int anioA)
{
   int edad;

   edad = anio - anioA;

   return edad;
}



void Individuo::imprimirObj(Individuo obj)
{
   cout<<obj.getNombre()<<endl;
   cout<<obj.getDia()<<"/"<<obj.getMes()<<"/"<<obj.getAnio()<<endl;

}