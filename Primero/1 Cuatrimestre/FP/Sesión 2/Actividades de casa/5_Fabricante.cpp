/*	Programa que indica cuanto cobra cada miebro por las ganancias de un producto
	Sabemos:	El equipo est� formado por 4 personas: Un dise�ador y 3 fabricantes
				y que el dise�ador cobra el doble que cada uno de los fabricantes
	Necesitamos: Las ganancias generadas
	Calcula: Cantidad que cobra cada uno
*/

#include <iostream>			//	Inclusi�n de los recursos de E/S

using namespace std;

int main(){
	double ganancias;			//	Programa principal
	double disenador;			//	Declaraci�n de variables	
	double fabricante;		//	(No me reconoc�a la � el programa)
	
	cout << "Intoducir la ganancia total de la empresa: " ;
	cin >> ganancias;
	
	fabricante = ganancias/5 ;	
	
	cout << "Cada fabricante gana: " << fabricante << "\n\n" ;
	
	/*	Si las llamamos "x" a las ganancias de cada fabricante e "y" a la del
	dise�ador y sabemos que y=2x, pues el total de ganancias ser�a 
	3x+y = 3x+2x = 5x. Por tanto, x = ganancias totales/5
	*/
	
	disenador = ganancias-3*fabricante ;
	
	cout << "El dise�ador gana: " << disenador << "\n\n" ;
	
	system ("pause");
}
