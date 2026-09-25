#include <iostream>
using namespace std ;// librerias de entrada y salida ,, (cout ,cin )
 int main(){
 	// declaracion de "opcion" como entero para la eleccion de opciones
 int opcion;
 //se pide al usuario que ingrese el dia 
 cout << "Ingrese dia \n :";	
 // lectura de opcion ingresada por el usuario
 cin >> opcion;
 
 // switch que verifica la opcion del usuario y  y imprime su equivalente 
   switch (opcion){
   	case 1:
   		cout << " El dia de la semana es domingo";
   		break;
   	case 2:
   		cout << " El dia de la semana es lunes";
   		break;
   	case 3:
   		cout << " El dia de la semana es martes";
   		break;
   	case 4:
   		cout << " El dia de la semana es miercoles";
   		break;
   	case 5:
   		cout << " El dia de la semana es jueves";
   		break;
   	case 6:
   		cout << " El dia de la semana es viernes";
   		break;
   	case 7:
   		cout << " El dia de la semana es sabado";
   		break;
   		// impresion en caso de opcion invalida
   	default:
   		cout << "Opcion invalida ";
   		break;
   	
   }
 	
 	return 0;
 }
