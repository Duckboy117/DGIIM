
/* 
   Calcular el minimo de varios valores leidos desde teclado, contando el numero de introducidos
   Terminador de entrada de datos: 0
*/

#include <iostream> 
#include <string>  
using namespace std;    
    
int main(){     
    const int TERMINADOR = 0;
    const string MENSAJE_ENTRADA = "\nIntroduzca un valor real: ";
    
    double dato, min;
    int validos_introducidos;
    

	/*
	Algoritmo:
		min contendra el m�nimo hasta ese momento

		Leer datos hasta llegar al terminador 
			Actualizar el contador de valores introducidos
			Actualizar, en su caso, min
	*/
    
    
	/*
	while (dato != TERMINADOR){     
		validos_introducidos++;
      
		if (dato < min)           
			min = dato;
	}
	*/


	// Que valor le damos a dato la primera vez? -> Lectura Anticipada
	

	/*
	cin >> dato;

	while (dato != TERMINADOR){     
		validos_introducidos++;
      
		if (dato < min)           
			min = dato;

		cin >> dato;
	}
	*/

	// �Qu� valor le damos a min la primera vez?

	/*
	   Algo que NUNCA haremos ser� inicializar min a un literal:
      Por ejemplo, si suponemos que los datos le�dos fuesen enteros, 
      plantemos inicializar min al m�ximo posible de todos ellos:
	*/
	/*
	cin >> dato;
	min = 32768;

	while (dato != TERMINADOR){     
		validos_introducidos++;
      
		if (dato < min)           
			min = dato;
		
		cin >> dato;
	}
	*/
	/*
	   Pero 32768 puede que sea el m�nimo entero en un compilador 
	   que use 16 bits para su representaci�n,
	   PERO en otro compilador que use 32 bits, el m�nimo entero es mucho m�s peque�o.
	   Si todos los valores le�dos desde teclado est�n por encima de la constante anterior,
	   el programa ya no funcionar� correctamente, ya que dar� como salida 32768
	*/

	/*
		Soluci�n: Inicializamos min al PRIMER valor le�do.
		Es muy intuitivo: Leemos un primer valor y ese es el m�nimo hasta ese momento.
		Si el primer valor fuese ya el terminador, podemos dejar sin asignar la variable min
		o asignarle el mismo valor terminador. 
		En cualquier caso, identificamos esta posibilidad asignando a validos_introducidos el valor 0
	*/

	/*
	Algoritmo:
		min contendr� el m�nimo hasta ese momento
		Leer un primer dato e inicializar min a dicho valor.

		Leer datos hasta llegar al terminador
			Actualizar el contador de valores introducidos
			Actualizar, en su caso, min
	*/

	cout << MENSAJE_ENTRADA;

    cin >> dato;
    min = dato;
    validos_introducidos = 0;
     
    while (dato != TERMINADOR){
      validos_introducidos++;
      
      if (dato < min)           // La primera vez, dato es igual a min => false
         min = dato;
         
      cout << MENSAJE_ENTRADA;
      cin >> dato;
    }
   
    if (validos_introducidos > 0){
      cout << "\nNumero de valores introducidos = " << validos_introducidos;
      cout << "\nMinimo = " << min;
    }
    else
      cout << "\nNo se introdujo ningun valor";
      
    cout << "\n\n";
}
