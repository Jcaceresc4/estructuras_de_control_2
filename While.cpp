#include<iostream>
using namespace std;
main(){
	//condicion es verdadera el ciclo se sigue ejecutando 
	/*int i=0;
	while(i<5){
		cout<<"while: "<<i<<endl; 
		i++;	
	} */

	char respuesta = 's'; 
	while(respuesta =='s' || respuesta=='S'){
		cout<<"Desea ingresar otro valor (s/n) ";
		cin>>respuesta;
	}
	
	
	system("pause");
}
