// dias de la semana usando if anidados..
#include <iostream>

using namespace std ;

int main(){
	// menu de opciones de dias de la semana
	int opcion;
	cout << "Bienvenido" << endl;
	cout << "Elija dia de la semana" << endl;
	cout << "opcion 1:lunes" <<"\n";
	cout << "opcion 2:martes" <<"\n";
	cout << "opcion 3:miercoles" <<"\n";
	cout << "opcion 4:jueves" <<"\n";
	cout << "opcion 5:viernes" <<"\n";
	cout << "opcion 6:sabado" <<"\n";
	cout << "opcion 7:domingo" <<"\n";

	cout << "Elija una opcion" <<"\n" << ":";
	cin >> opcion;
		// validador de opciones del menu .
	if(opcion > 7 || opcion <= 0 ) {
		cout <<"\t" << "Error" <<endl << "Elija una opcion de los dias de la semana  de 1 al 7" <<endl;
		cout << " vuelve al intentarlo" ;
		// impresion de los dias segun la eleccion del usuario
  	} else { if (opcion == 1){
		cout << "El dia es lunes";
 	}else if (opcion == 2){
		cout << "El dia es martes";
	
	  }else if (opcion == 3){
		cout << "El dia es miercoles";
	 }else	if (opcion == 4){
		cout << "El dia es jueves";
	 }else	if (opcion == 5){
		cout << "El dia es viernes";
	 }else	if (opcion == 6){
		cout << "El dia es sabdo";
	 }else	if (opcion == 7){
		cout << "El dia es domingo";
	 }
}
return (0);
	

}