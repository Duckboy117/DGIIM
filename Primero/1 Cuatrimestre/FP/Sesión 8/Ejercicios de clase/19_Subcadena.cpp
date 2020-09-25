/*	Programa que dado una cadena de
	caracteres; devuelva la subcadena
	comprendidas ente �as posiciones 'x' e 'y'
	incluidas */
	
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	const int LONGITUD_CADENA = 20;
	char cadena_principal[LONGITUD_CADENA];
	int posicion_inicio;
	int posicion_final;
	int contador = 0;
	
	cout << "Introduce una cadena de caracteres: ";
	cout << "(Para finalizar introduzca '�' o introduzca " << LONGITUD_CADENA << " caracteres) ";
	cout << "\n";
	
	for(int i = 0; i != LONGITUD_CADENA; i++){
		cin >> cadena_principal [i];
		contador++;
		
		if (cadena_principal [i] == '�')
			i = 19;
	}
		
	cout << "\n\nIntroduzca la posici�n en la que empieza la subcadena: ";
	cin >> posicion_inicio;
	cout << "\n\nIntroduzca la posici�n en la que termina la subcadena: ";
	cin >> posicion_final;
	
	cout << "\n\nLa subcadena ser�a: " << "\n" ;
	
	if (posicion_final > contador)
		cout << "\nCUIDADO: No has introducido tantos car�cteres ";
	else{	
		for(int j = posicion_inicio; j != posicion_final + 1; j++)		
			cout << cadena_principal[j];
	}	
		
	cout << "\n\n";
	system ("pause");
}
