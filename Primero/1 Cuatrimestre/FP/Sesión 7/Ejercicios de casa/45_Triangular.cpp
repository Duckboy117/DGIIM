/*	Programa que indica el n�mero de naturales
	triangulares hasta un determinador n�mero */
	
#include <iostream>

using namespace std;

int main(){
	int maximo;
	int natural_a_analizar;
	int sumando;
	int suma;
	int contador;
	bool es_triangular;
	
	cout << "\nIntroduce n�mero tope: ";
	cin >> maximo;
	
	contador = 0;
	sumando = 1;
	suma = 0;
	natural_a_analizar = 1;
	
	while(natural_a_analizar <= maximo){
		while(!es_triangular && (suma <= natural_a_analizar)){
			suma = suma + sumando;
			sumando++;
			
			es_triangular = suma == natural_a_analizar;
		};
		
		suma = 0;
		sumando = 1;
		natural_a_analizar++;
		
		if(es_triangular)
			contador++;
			es_triangular = false;
		};
	
	cout << "\n\nHasta " << maximo << " hay " << contador << " triangulares ";
	
	cout << "\n\n";
	system ("pause");
}
