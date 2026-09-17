#include<iostream>
using namespace std;
int main(){
	int opcion;
	 cout <<"opcion 1:domingo \n";
	 cout <<"opcion 2:lunes"<< "\n";
	 cout <<"opcion 3:martes"<< "\n";
	 cout <<"opcion 4:miercoles"<< "\n";
	 cout <<"opcion 5:jueves"<< "\n";
	 cout <<"opcion 6:viernes"<< "\n";
	 cout <<"opcion 7:sabado"<< "\n" << " Elija una opcion"<<"\n" <<":";
	 cin >> opcion;
   
    switch(opcion){
    	case 1:
    		cout << "el dia es domingo" ;
    		break;
    	case 2:
    		cout << "el dia es lunes" ;
    		break;
    	case 3:
    		cout << "el dia es martes";
    		break;
    	case 4:
    		cout << "el dia es miercoles";
    		break;
    	case 5:
    		cout << "el dia es jueves";
    		break;
    	case 6:
    		cout << "el dia es viernes";
    		break;
    	case 7:
    		cout << "el dia es sabado";
    		break;
    	default :
    		cout << " error , Ingrese un numero entre 1 y 7 ";
    		break;
	}
	return (0);
	
}
