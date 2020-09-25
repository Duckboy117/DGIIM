/*	Programa para leer un valor entero, suponiendo que el usuario
	ontroduzca siempre un entero de 3 d�gitos.
	Necesita: Introducir el valor entero.
	Calcula: Aparece el n�mero representado en la pantalla,
	de tal forma que los d�gitos estan separados por tres
	espacios en blanco.	
*/

#include <iostream>

using namespace std;

int main (){
	int x;			//	x es el n�mero de 3 d�gitos
	int y;			//	y son los dos d�gitos menos significativos del n�mero
	int centenas;
	int decenas; 
	int unidades;
	
	cout << "Introduce un n�mero de 3 d�gitos: " ;
	cin >> x ;
	
	centenas = x/100 ;			//	Se queda con el cociente
	y = x%100 ;	//	Se queda con el resto
	decenas = y/10 ;
	unidades = y%10 ;
	
	/*	Para este ejercicio usamos la idea de que al usar x/100
	el compilador solo se que queda con el cociente y al poner 
	x % 100 el compilador se queda con el resto */
	
	cout << centenas << " " << decenas << " " << unidades << "\n" ;	//	Las comillas sirven como espacios
	
	system ("pause");
}
	
