/*	Programa que indica si un a�o es bisiesto o no.
	La regla dice que un a�o es bisiesto si es m�ltiplo
	de 4, pero no de 100. Los m�ltipos de 400 si son 
	bisiestos.
*/

#include <iostream>

using namespace std;

int main(){
	int year ;
	bool bisiesto;
	
	cout << "Introduzcaun a�o: " ;
	cin >> year ;
	
	bisiesto = ( year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		
	if ( bisiesto )
		cout << "\n\nEl a�o " << year << " es bisiesto. " << "\n\n" ;
	else
		cout << "\n\nEl a�o " << year << " no es bisiesto. " << "\n\n" ;
		
	system ("pause") ;
}
