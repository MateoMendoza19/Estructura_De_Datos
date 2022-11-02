#include<iostream>
#include "ModuloC.cpp"


int main()
{
	Modulo mod(12);
    Modulo mod2(5);
    int a = mod%mod2;  
    cout<<	"Respuesta= "<< a<<endl;
	
	return 0;
}