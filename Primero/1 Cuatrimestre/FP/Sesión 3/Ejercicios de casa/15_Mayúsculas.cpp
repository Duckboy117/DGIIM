/*	Programa que lea un car�cter que el usuario introduzca en
	may�scula y lo transforma a min�scula.
	No se pueden usar las funciones toupper ni tolower de la
	biblioteca cctype. Ha de realizarse con la equivalencia entre
	enteros y caracteres. 
*/

#include <iostream>

using namespace std;

int main(){
	
	/*	Teniendo en cuenta que en la tabla ASCII hay el mismo n�mero
		de letras en may�scuas y en min�scula y que est�n colocadas
		en el mismo orden, basta con sabe cu�ntos caracteres separan
		a A ( primera letra may�scula ) y a ( primera letra min�scula )
		
		El orden de 'A' es 65 y el de 'a' 97, por tanto la separaci�n
		es de 32. Esta proporci�n se cumple de B-b, de C-c ...
		
		Sabiendo esto ya podemos realizar nuestro programa 
	*/
	
	char minuscula, mayuscula;
	
	cout << " Introduzca una letra en may�scula: " ;
	cin >> mayuscula ;
	
	minuscula = mayuscula + 32 ;
	
	cout << "\nEl car�cter en may�scula es: " << mayuscula ;
	cout << "\nEl car�cter en min�scula es: " << minuscula << "\n\n" ;
	
	system ("pause");
}	
