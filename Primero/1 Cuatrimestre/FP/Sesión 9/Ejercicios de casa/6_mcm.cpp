/*	Implemetar m�dulo que devuelva
	m�nimo com�n m�ltiplo */
	
#include<iostream>

using namespace std;

//	Necesitamos la del m�ximo com�n divisor
// Usamos el algoritmo de Euclides

int MCD (int a, int b){
   int t;
   int intercambiador;
   
   if (b > a){
   	intercambiador = b;
   	b = a;
   	a = intercambiador;
   }
   
   if(b == 0)
   	return a;
   else{
   	   while (a > 0){
      	t = a;
      	a = b % a;
      	b = t;
     	}
     }
          
     	return b;
 }; 
 
int MCM (int a, int b){
	int mcm;
	
	mcm = (a*b)/MCD(a,b);
	
	return mcm;
}

//	Para probar que funciona

int main(){
	int numero1;
	int numero2;
	int resultado;
	
	cout << "Introduzca un n�mero: ";
	cin >> numero1;
	cout << "\nIntroduzca otro n�mero: ";
	cin >> numero2;
	
	resultado = MCM(numero1, numero2);
	
	cout << "\n\nEL MCM es : " << resultado << "\n\n";
	
	system("pause");
}
