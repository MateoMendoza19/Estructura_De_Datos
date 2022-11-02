#include<iostream>
using namespace std;

class Modulo
{
public:
   int getMod(void);
   void setMod(int newMod);
   Modulo(int n):mod(n){}

protected:
private:
   int mod;

int operator%(const Modulo& a) const 
	{
		return mod%a.mod;
	}
}; 		

