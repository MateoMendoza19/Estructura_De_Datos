/***********************************************************************
 * Module:  Modulo.h
 * Author:  Mateo Mendoza y Samir Mideros
 * Modified: martes, 1 de noviembre de 2022 20:50:32
 * Purpose: Declaration of the class Modulo
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Modulo_h)
#define __Class_Diagram_1_Modulo_h

class Modulo
{
public:
   int getmod(void);
   void semMod(int newmod);
   Modulo(int n):mod(n){}

protected:
private:
   int mod;

};

#endif