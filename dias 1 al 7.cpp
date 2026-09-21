// solicitud 1 al 7 dias
#include <iostream>
using namespace std;
int main(){
int	opcion;
	cout <<  "Ingrese un numero de 1 al 7" <<endl <<":" ;
	cin >> opcion;
	if(opcion==1){	
	  cout <<"domingo";	
	} else if(opcion == 2){
		cout<<"lunes";
	} else if(opcion == 3){
		cout<<"martes";
	} else if(opcion == 4){
		cout<<"miercoles";
	} else if(opcion == 5){
		cout<<"jueves";
	} else if(opcion == 6){
		cout<<"viernes";
	} else if(opcion == 7){
		cout<<"sabado";
    }
	
	return 0;
}