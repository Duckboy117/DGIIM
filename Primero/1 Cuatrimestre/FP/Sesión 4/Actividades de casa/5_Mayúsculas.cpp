/*	Programa para pasar de may�scula a min�scula. En caso
	de que la letra no sea may�scula permanecer�
	igual 
*/

#include <iostream>

using namespace std;

int main (){
	char letra_convertida;
	char letra_original;
   const int distancia = 'a'-'A';
 
   cout << "\nIntroduzca una letra: ";
   cin >> letra_original;
   
   bool mayuscula;
   
   mayuscula = (letra_original >= 'A') && (letra_original <= 'Z') ;
   
   if ( mayuscula ){
   	
   	letra_convertida = letra_original + distancia ;
   	
   	cout << "\n\nLa letra introducida es: " << letra_original << ", y convertida es: " << letra_convertida << "\n\n" ;
   	
	}
	
	else
	
	cout << "\n\nLa letra introducida no es may�scula " << "\n\n" ;
	
	system ("pause");
}
