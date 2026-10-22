	#include <iostream>
	#include <string>
	using namespace std;
		struct persona{
		string nombre;
		int damage;
		};
	int main (){
		int diferencia;
	persona p1;
	p1.nombre = "scorpion";
	p1.damage = 200;
	persona p2;
	p2.nombre = "subzero";
	p2.damage = 150;
	if(p1.damage> p2.damage){
		diferencia = p1.damage - p2.damage;
		cout <<"el damage de "<<p1.nombre<<" es superior: "<<p1.damage<<" la diferencia es de fuerza es: "<<diferencia;  
	}else if( p1.damage  > p2.damage){
		diferencia = p2.damage - p1.damage;
		cout <<"el daño de "<<p2.nombre<<" es superior: "<<p2.damage<<" la diferencia es de fuerz es: "<<diferencia;
	}
	return 0;
	}
