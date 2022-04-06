#include "fib.h"
#include <iostream>
int fibonacci(unsigned int n) {
	if(n<=2)
	{
		return 1;// w przypadku n zwraca wartosc 2 przez co jest nie poprawny wynik
	}
	else
		return fibonacci(n - 2) + fibonacci(n - 1);
}
void fibonacci2( int n)
{
	 int x=0,y=1;

	for(int i=0;i<n;i++)
     {
           std::cout<<y<<" ";
		   y=x+y;//suma wyrazów = następny wyraz
		   x=y-x;//więc x równa się poprzednie y 
     }     
}