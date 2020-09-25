/*	Programa para calcular el valor que toma una funci�n Gaussiana en un punto x.
	Implementa: La funci�n Gaussiana.
	Necesitas: esperanza, desviaci�n t�pica y el valor de x
					esp, des, x
	Calcula: El valor que toma la funci�n en x
					img
*/

#include <iostream>	//	Inclusi�n de los recursos de E/S
#include <cmath>		//	Inclusi�n de los recursos matem�ticos

using namespace std;

int main (){			//Programa principal
	double esp;			//Declaraci�n de variables
	double des;			//La esperanza, la desviaci�n, el punto y el valor que toma la funci�n
	double punto;
	double img;
	const double PI = 3.1415927;	//Declaraci�n de PI como constante
	
	cout << "Introduzca el valor de la media o esperanza: "  ;
	cin >> esp;
	
	cout << "Introduzca el valor de la desviaci�n t�pica: "  ;
	cin >> des;
	
	cout << "Introduzca el valor del punto (El valor de x): " ;
	cin >> punto;
	
	img = ((1/(des*sqrt(2*PI)))*exp(-1/2*pow(((punto-esp)/des), 2)));
	
	cout << "\nLa funci�n toma el valor: " << img << "\n\n" ;
	
	system ("pause") ;
}
