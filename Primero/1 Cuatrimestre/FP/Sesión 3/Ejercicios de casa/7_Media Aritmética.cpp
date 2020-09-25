/*	Programa para calcular la media aritm�tica muestral y la desviaci�n
	est�ndar de la altura de tres personas
	Necesitamos: La altura de cada persona
	Calcula: La media aritm�tica muestral y la desviaci�n est�ndar
*/

/*	La funci�n a implementar es:
         1    N
         -  media = --- suma (x_i)
         N   i=1
                            ________________________________
                           /   1     N                   
            desviacion =  / ( ---  suma  (x_i - media)^2 )
                         V     N    i=1                
*/

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
	int altura_1;
	int altura_2;		//	Suponemos que el usuario introduce los datos en cent�metros
	int altura_3;
	int media;
	double desviacion;
	const double personas = 3;		//	Definimos n como constante
	
	cout << "Introduce la altura de la primera persona: " ;
	cin >> altura_1 ;
	
	cout << "Introduce la altura de la segunda persona: " ;
	cin >> altura_2 ;
	
	cout << "Introduce la altura de la tercera persona: " ;
	cin >> altura_3 ;
	
	media = (altura_1 + altura_2 + altura_3)/personas ;
	
	cout << "\nLa media vale: " << media ;
	
	desviacion = sqrt( (1/personas) * ( pow((altura_1 - media),2) + pow((altura_2 - media),2) + pow((altura_3 - media),2) ) ) ;
	
	cout << "\nLa desviaci�n vale: " << desviacion << "\n" ;
	
		
	/*	Apliaci�n del programa sesi�n 3. Mostrar si los datos
		introducidos est�n por debajo o por encima de la media
	*/
	
	const string MAYOR = " es mayor o igual a la media ";
	const string MENOR = " es menor o igual a la media ";
	
	if ( altura_1 > media ) 
		cout << "\nAltura 1: " << altura_1 << 	MAYOR ;
	else
		cout << "\nAltura 1: " << altura_1 << MENOR ;
		
	if ( altura_2 > media )
		cout << "\nAltura 2: " << altura_2 << MAYOR ;
	else
		cout << "\nAltura 2: " << altura_2 << MENOR ;
		
	if ( altura_3 > media )
		cout << "\nAltura 3: " << altura_3 << MAYOR << "\n\n" ;
	else
		cout << "\nAltura 3: " << altura_3 << MENOR << "\n\n" ;
		
	system ("pause");	
}
	
