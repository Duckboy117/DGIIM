/*	Programa para convertir el valor de un 
	caracter num�rico entero, en nuestro caso 7
	y se le asigne el valor num�rico a una variable tipo 
	entera, la cual imprimir� por pantalla
*/

#include <iostream>
#include <cstdlib>

using namespace std; 

int main(){
	
	/*	Para este programa debemos tener en cuenta que al introducir "7"
		como un caracter, su valor num�rico correspondiente en ASCII es
		55.
		
		Sabiendo esto; para almacenar el valor num�rico 7 en una variable de tipo
		entera e imprimirla por pantalla bastar�a con asignarle a dicha
		variable el valor "7" - 48.
		
		El c�digo anterior ser�a claramente v�lido, pero podr�a llevar
		a confusi�n ya que si alguien lee expl�citamente "7"-48 no estar�a
		pensando en 7 como resultado.
		
		Para evitar esta confusi�n, lo mejor es buscar en la tabla ASCII un 
		caracter cuyo orden sea de 48 en ASCII y restarle dicho valor a "7",
		el cual se trata del 0,el cual es del orden de 48 en ASCII.
		
		De esta forma pordemos evitar posibles confusiones.
	*/
	
	char caracter;
	int entero;
	const char cero = '0'; 
	
	/*	Como el la tabla ASCII los n�mero enteros 0 a 9 est�n ordenados, el 
		razonamiento anterior es v�lido para cualquiera de estos n�meros
	*/
	
	cout << "\nIntroduca un car�cter num�rico: " ;	//	Supongamos que el usuario introduce un entero del 0-9
	cin >> caracter ;
	
	entero = caracter-cero ;
	
	cout << "\nEl entero correpondiente es: " << entero << "\n\n" ;
	
	system ("pause");
}
