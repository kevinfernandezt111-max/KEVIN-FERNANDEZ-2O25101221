/*proyecto de lenguaje simulacion de compra de productos ,uso de lo que aprendimos en clase idea 1:::::
incompleto a falta de los metodos de pagos y otras cosa que aun no lo tengo */
#include<iostream>
#include<cstdlib>
using namespace std;
//declaraciones de variables a usar
float vuelto(float a , float b);
float total(float a , float b );
int main(){
	int obj_1 = 2000 , obj_2 = 2500 , obj_3 = 5000,cantidad,opcion,metodo,efectivo;//precios de productos
	float saldo,sobra;//totalidad de a pagar por productos 
/*menu de interaccion del usuario para seleccion de producto y procesos siguientes.
 con uso de do-while , switch ,if */
	do{//inicio del programa 
	cout <<"====ELIJA UN PRODUCTO===="<<endl;
	cout <<" 1=agua:2000 \n 2=cafe:2500 \n 3=leche:5000 \n 4=salir"<<endl<<":";
	cin  >>opcion;
	if(opcion == 1 || opcion == 2 || opcion == 3){
	cout <<"elija cantidad "<<endl<<":";
	cin >>cantidad;
	switch(opcion){//llamado de variable (total) para imprsion de saldos
		case 1:
			saldo = total(obj_1,cantidad);
			cout <<"Monto a pagar ="<<saldo<<endl;
			break;
			case 2:
			saldo = total(obj_2,cantidad);
			cout <<"Monto a pagar ="<<saldo<<endl;
			break;
			case 3:
			saldo = total(obj_3,cantidad);
			cout <<"Monto a pagar ="<<saldo<<endl;
			break;
		default:
			cout<<"======>Elija opcion valida<====="<<endl;
			break;
	}// verificacion de pago 
	cout <<"====Elija metodo de pago===="<<endl;
	cout <<" 1:Tarjeta \n 2:Efectivo"<<endl;
	cin >> metodo;
	if(metodo == 1){
		cout <<"Cobro realizado de"<<saldo<<endl;
		return 0;
	}else if(metodo == 2){
		cout <<"Ingrese su efectivo"<<endl<<":";
		cin >>efectivo;
	}
	 if(efectivo >= saldo){
		sobra = vuelto(efectivo , saldo);
		cout <<"pago realizado \n"<<"su vuelto es de "<<sobra<<endl;
		return 0;
	}else if(efectivo < saldo){
		cout<<"monto insuficiente para realizar la compra ingrese un monto mayor"<<endl;
	}
	}else if(opcion == 4){
		cout <<"cerrando programa"<<endl;
	}else {
		cout <<"****Elija opcion valida****"<<endl;
	}
	} while(opcion != 4);
	return 0;		
}	
//variables declaradas en la logica de sistema lo que se usa para llamar obtener monto total
float total(float a , float b ){
	return a * b ;
}
float vuelto(float a , float b){
	return a - b ;
}