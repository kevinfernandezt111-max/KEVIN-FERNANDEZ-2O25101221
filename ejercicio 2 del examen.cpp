#include <iostream>
using namespace std ;// librerias de entrada y salida ,, (cout ,cin )
// prototipo o declaracion de variables
float suma(float a , float b);
float resta(float a , float b);
float multiplicacion(float a , float b);
float division(float a , float b);

 int main(){
 	// declaracion de enteros y variables
 int opcion;
 float numero_1,numero_2, resultado;
 // solicitud y guardado de los valores ingresesados por el usuario
 cout <<"Ingrese los 2 numeros a evaluar \n";
 cin >>	numero_1;
 cin >>	numero_2;
 //menu de opciones de evaluacion
 cout <<"opcion 1:suma\nopcion 2:resta\nopcion 3:multiplicacion\nopcion 4:division \n";
 cin >> opcion;
 // switch de impresion de de resultados de cada opcion  con default por si el user ingrese un valor fuera de opcion
 // y llamada a los prototipos
  switch(opcion){
	case 1:
		resultado = suma(numero_1,numero_2);
		cout <<"la suma es de :"	<< resultado ;
		break;
	case 2:
		resultado = resta(numero_1,numero_2);
		cout <<"la resta es de :"	<< resultado ;
		break;
	case 3:
		resultado = multiplicacion(numero_1,numero_2);
		cout <<"la multiplicacion es de :"	<< resultado ;
		break;
	case 4:
		resultado = division(numero_1,numero_2);
		cout <<"la division es de :"	<< resultado ;
		break;
	default :
		cout << "Opcion invalida ingrese valores de acorde al menu de opciones";
		break;
}
 
 return 0 ;
}
//uso de los prototipoa en la logica de  la resolucion de los ejercicios
   float suma(float a , float b){
    return a + b;
  }
  float resta(float a , float b){
	return a - b;
}
  float multiplicacion(float a , float b){
	return a * b;
}
  float division(float a , float b){
	return a / b;
}

