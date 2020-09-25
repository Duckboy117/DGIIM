/*	Juego: Intenta adivinar el n�mero
	introducido por otro usuario */
	
#include <iostream>

using namespace std;

int main(){
	int numero_a_adivinar;
	int numero_del_jugador;
	bool ganador;
	bool TERMINADOR;
	char respuesta;
	
	cout << "Trata de adivinar el n�mero. En caso de querer finalizar pulsa @ ";
	
	/*	El n�mero a adivinar se introducira en el
	archivo .cpp, para que as� el jugador no
	pueda ver de que n�mero se trata */
	
	numero_a_adivinar = 87;
	
	do{
		do{
			cout <<"\n";
			cin >> numero_del_jugador;
		
			if (numero_del_jugador > numero_a_adivinar)
				cout << "\nEl n�mero a adivinar es m�s peque�o ";
			
			if (numero_del_jugador < numero_a_adivinar)
				cout << "\nEl n�mero a adivinar es m�s grande ";
		
			ganador = numero_del_jugador == numero_a_adivinar;
			TERMINADOR = numero_del_jugador == '@';
		
		}while(!ganador && !TERMINADOR);
	
	if(ganador)
		cout << "\nHas ganado ";
	else
		cout << "\nHas perdido ";
		
	cout << "\n\n�Quieres jugar de nuevo (s/n)? ";
	cin >> respuesta;
	
	}while(respuesta == 's');
	
	cout << "\n\n";
	system ("pause");
}
		
	
