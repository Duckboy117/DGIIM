/* Programa para traducir una serie de f�rmulas a expresiones
	v�lidas del lenguaje C++   
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
   
   // Primera funci�n
   
   double x;
   double y;
   double imagen;
   
   cout << "\nProcedemos con la primera funci�n" ;
   
   cout << "\n\nIntroduce el valor de x: " ;
   cin >> x ;
   
   cout << "\nIntroduce el valor de y: " ;
   cin >> y ; 
   
   imagen = ( 1 + ( pow(x,2) / y) ) / (pow(x,3) / (1+y) ) ;
   
   cout << "\nLa im�gen para la primera funci�n es: " << imagen ;
   
   // Segunda func�n
   
   double h;
   double imagen2;
   
   cout << "\n\nProdecemos con la segunda funci�n" ;
   
   cout << "\n\nIntroduzca el valor de h: " ;
   cin >> h ;
   
   imagen2 = (1 + (1.0/3.0)*sin(h) - (1.0/7.0)*cos(h)) / (2*h) ;  //Si pones 1/3 da un entero y redondea el resultado
   
   cout << "\nLa im�gen par la segunda funci�n es: " << imagen2 ;
   
   // Tercera funi�n
   
   double z;
   double imagen3; 
   
   cout << "\n\nProcedemos con la tercera funci�n" ;
   
   cout << "\n\nIntroduzca el valor de z: " ; 
   cin >> z ;
   
   imagen3 = sqrt (1 + pow( (exp(z)/(z*z)) , 2) ) ;
   
   cout << "\nLa im�gen de la tercera funci�n es: " << imagen3 << "\n\n" ;
   
   system ("pause");
}
