#include <iostream>
using namespace std;
main(){
	//i++, i+=1, i=i+1
	int i=0;
	int contar=0;
	for (i=4;i<=8;i+=2){ // variable inicio; finaliza ; incrementar o decrementar, va a ir de 0 hasta 9
		cout<<i<<endl;
		contar++; 	
	}
	cout<<"i afuera: "<<i<<endl;
	cout<<"Cliclos: "<<contar<<endl;
	system ("pause");
}
