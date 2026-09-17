#include <iostream>
#include <cstdlib>
using namespace std ;

//prototipo de las funciones
float suma( float a , float b);
float resta( float a , float b);
float multiplicacion( float a , float b);
float division( float a , float b);

int main(){
	// declaracion
	float suma_denumeros,resta_denumeros,multiplicacion_denumeros,division_denumeros,n1,n2;
	 n1=2;
	 n2=5;
	 
	 // llamar a las funciones
	  suma_denumeros = suma( n1 ,n2);

      resta_denumeros = resta( n1 ,n2);

      multiplicacion_denumeros = multiplicacion( n1 ,n2);

      division_denumeros = division( n1 ,n2);
	 
	 
// impresion de resultados

	cout <<"la suma de "<<n1<<" con "<<n2<<"es igual a "<<suma_denumeros<<"\n";
	cout <<"la resta de "<<n1<<" con "<<n2<<"es igual a "<<resta_denumeros<<"\n";
	cout <<"la multiplicacion de "<<n1<<" con "<<n2<<"es igual a "<<multiplicacion_denumeros<<"\n";
	cout <<"la division de "<<n1<<" con "<<n2<<"es igual a "<<division_denumeros<<"\n";
	system("PAUSE");
	
}
// llamar de alas funciones para la logica del resultado

float suma( float a , float b) {
return a + b; }
float resta( float a , float b) {
return a - b; }
float multiplicacion( float a , float b) {
return a * b; }
float division( float a , float b) {
return a / b; }

