/*	Programa que indica las toneladas de horatliza
	que exporta un pa�s y dice que pa�s es el que m�s 
	toneladas exporta */

#include <iostream>

using namespace std;

int main(){
	char pais;
	char hortaliza;
	int toneladas;
	int total_exportado_Espania;
	int total_exportado_Francia;
	int total_exportado_Alemania;
	
	total_exportado_Espania = total_exportado_Francia = total_exportado_Alemania = 0;
	
	while ( pais != '@' ){
		cout << "Introduzca inicial del pa�s: ";
		cin >> pais;
		
		cout << "Introduzca inicial de la hortaliza: ";
		cin >> hortaliza;
		
		cout << "Introduzca cantidad: ";
		cin >> toneladas;
		
		cout << pais << "" "" << hortaliza << "" "" << toneladas << "\n\n";
		
		if (pais == 'E')
			total_exportado_Espania = total_exportado_Espania + toneladas;
		if (pais == 'F')
			total_exportado_Francia = total_exportado_Francia + toneladas;
		if (pais == 'A')
			total_exportado_Alemania = total_exportado_Alemania + toneladas;
			
		if (total_exportado_Espania > total_exportado_Francia)
			cout << "El m�ximo exportador es Espa�a con " << total_exportado_Espania << " toneladas" << "\n\n";
		else
			if (total_exportado_Alemania > total_exportado_Francia)
				cout << "El m�ximo exportador es Alemania con " << total_exportado_Alemania << " toneladas" <<"\n\n";
			else
				cout << "El m�ximo exportador es Francia con " << total_exportado_Francia << " toneladas" << "\n\n";
	};
	
	cout << "\n\n";
	
	system ("pause");
}
