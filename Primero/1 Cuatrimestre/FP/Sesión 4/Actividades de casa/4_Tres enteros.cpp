/*	Programa que lee 3 valores enteros y dice si estan
	ordenados
*/

#include <iostream>�
#include <cstring>

using namespace std;

int main(){
	int entero1;
	int entero2;
	int entero3;
	
	cout << "Introducir primer entero: " ;
	cin >> entero1 ;
	
	cout << "\nIntroducir segundo entero: " ;
	cin >> entero2 ;
	
	cout << "\nIntroducir tercer entero: " ;
	cin >> entero3 ;
	
	if ( (entero1 <= entero2 && entero2 <= entero3) || (entero1 >= entero2 && entero2 >= entero3 ) )
		
		cout << "\nLos n�meros est�n correctamente ordenados " << "\n\n" ;
		
	else 
	
		cout << "\nLos n�meros est�n incorrectamente ordenados " << "\n\n" ;
		
	system ("pause");
}
