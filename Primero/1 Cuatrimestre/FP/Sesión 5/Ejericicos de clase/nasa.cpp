/*	Programa para descodificar una transmisi�n extraterrestre
	compuesta por 0 y 1. El n�mero estar� descompuesto en sus 
	factores primos y cada factor aparecer� en la secuencia como
	la longitud de cada secuecia de valores 1 */
	
#include <iostream>

using namespace std;

int main (){
	int secuencia_codificada;
	int numero_descodificado;
	int contador_de_0;
	int contador_de_1;
	
	//	Inicializamos las variables
	
	contador_de_0 = 0;
	contador_de_1 = 0;
	numero_descodificado = 1;
	
	cout << "Introduce el c�digo: " << "\n\n";
	
	/*	Usamos un bucle para pedir cada d�gito de la secuencia.
		Mientras sea 1, cuenta el n�mero de 1.
		Cuando cambie a 0, aumenta el contador de 0 y almacena
		el n�mero decodificado hasta el momento.
		Al cambiar nuevamente a 1 resetea el contador */
	
	while(contador_de_0 != 5){
		cout << "";
		cin >> secuencia_codificada;
		
		if(secuencia_codificada == 1){
			if (contador_de_0 > 0){
				contador_de_0 = 0;
				contador_de_1 = 0;
			};
				
			contador_de_1++;
		}
			
		if(secuencia_codificada == 0){
			if(contador_de_0 == 0)
				numero_descodificado = numero_descodificado * contador_de_1;
				
			contador_de_0++;
		}		
	};
	
	cout << "\nEl c�digo descodificado es: " << numero_descodificado << "\n\n";
	
	system ("pause");
}
