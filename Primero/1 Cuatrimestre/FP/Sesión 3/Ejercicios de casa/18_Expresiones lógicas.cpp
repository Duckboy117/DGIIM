/*	Programa que devuelve el valor de determinadas expresiones
	l�gicas. En caso de que sean incorrectas se deber� justificar
	el error
*/

#include <iostream>

using namespace std;

int main(){
	
	/*	Para este ejercicio vamos a utilizar datos de tipo l�gico 
		o booleanos, los cuales est�n formado �nicamente por dos valores
		posibles: true o false.
		
		Adem�s, necesitaremos usar algunos operadores l�gicos, como son:
		&&, que corresponde a Y
		||, que corresponde a O
		!, que corresponde a NO
		
		Tambi�n necesitaremos operadores relacionales como:
		== que es igual
		!= que significa distinto
		<> menor o mayor
		<= => menor o igua, mayor o igual
	*/
	
	// Apartado A
	
	bool desigualdad1;
	
	desigualdad1 = 2 + 3 < 5 + 8 ;	// True
	
	cout << "El compilador devuelve : " << desigualdad1 << ", ya que la proposici�n es verdadera" ;
	
	// Apartado B
	
	bool desigualdad2;
	
	desigualdad2 = 2 < 3 < 4 ;	//True
	
	cout << "\nEl compilador devuelve : " << desigualdad2 << ", ya que la proposici�n es verdadera" ;
	
	//	Apartado C
	
	bool suma;
	
	suma = 7/3 + 4.0 ;	//	Esta proposici�n no representa ninguna expresi�n l�gica
	
	// Apartado D
	/*
	bool expresion1;
	int x, y, z;
	
	cout << "Introducir valor de x: " ;
	cin >> x ;
	
	cout << "Introducir valor de y: " ;
	cin >> y ;
	
	cout << "Introducir valor de z: " ;
	cin >> z ;
	
	expresion1 = ( (x == 4&&y == 3) || (!(z) = 2 == !(1) = 2) ) ; //	No tiene ningun sentido
	
	if (expresion1)
		cout << "\nEl compilador devuelve : " << expresion1 << ", ya que la proposici�n es verdadera" ; 
	else
		cout << "\nEl compilador devuelve : " << expresion1 << ", ya que la proposici�n es falsa" ;
	*/
			
	//	Apartado E
	
	bool expresion2;
	int x2;
	
	cout << "\nIntroducir valor de x: " ;
	cin >> x2 ;
	
	expresion2 = ( x2 <= 4||x2 >= 4 ) ;	//	Esta proposici�n es siempre verdadera, para todo valor entero de x
	
	if (expresion2)
		cout << "\nEl compilador devuelve : " << expresion2 << ", ya que la proposici�n es verdadera" ; 
	else
		cout << "\nEl compilador devuelve : " << expresion2 << ", ya que la proposici�n es falsa" ;
		
	cout << "\nLa proposici�n anterior es siempre verdadera (es trivial)" ;
	
	//	Apartado F
	
	bool expresion3;
	int x3;
	
	cout << "\n\nIntroducir valor de x: " ;
	cin >> x3 ;
	
	expresion3 = ( x3 < 4&&x3 > 4 ) ;	//	Esta proposici�n es falsa siempre
	
	cout << "\nEsta proposici�n es falsa siempre, ya que no existe numero entero que se a su vez mayor y menor que 4. " ;
	cout << "El compilador, por tanto, siempre devuelve " << expresion3 ;
	
	//	Apartado G
	
	bool expresion4;
	int z;
	char a;
	
	cout << "\nIntroduzca valor de z: " ;
	cin >> z ;
	
	cout << "Introduzca caracter : " ;
	cin >> a ;
	
	expresion4 = ( z > 6 || a < z && a > a || z < 6 ); // Esta expresi�n es siempre verdadera para z distinto de 6
	
	if (expresion2)
		cout << "\nEl compilador devuelve : " << expresion4 << ", ya que la proposici�n es verdadera" ; 
	else
		cout << "\nEl compilador devuelve : " << expresion4 << ", ya que la proposici�n es falsa" ;
	
	
	system ("pause");
}
	
