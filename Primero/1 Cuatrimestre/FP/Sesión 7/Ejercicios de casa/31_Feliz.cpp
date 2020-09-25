/*	Programa que indica si un n�mero
	es feliz. Se consider un n�mero feliz aquel
	que al sumar sus cifras al cuadrado y repetir
	lo mismo con el resultado un n�mero finito de vces
	acaba dando 1 */
	
#include <iostream>

using namespace std;

int main(){
	int natural;
	int natural_variable;
	int contador;
	int cifra;
	int suma;
	int divisor;
	bool es_feliz;
	
	cout << "Introduzca un natural: ";
	cin >> natural;
	
	suma = 0;
	divisor = 1;
	contador = 0;
	natural_variable = natural;
	
	
	while (!es_feliz){
		contador++;
		suma = 0;
		
		while(natural / divisor != 0){
			divisor = divisor * 10;
			cifra = ((natural_variable % divisor) - (natural_variable % (divisor/10))) / (divisor / 10);
		
			suma = suma + cifra * cifra;
		};
		
		natural_variable = suma;
		divisor = 1;
		es_feliz = suma == 1;
	};
	
	if (es_feliz)
		cout << "\n\n" << natural << " es feliz en " << contador << " interacciones";
	else 
		cout << "No es feliz";
		
	cout << "\n\n";
	system ("pause");
}
