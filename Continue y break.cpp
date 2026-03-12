#include <iostream>
using namespace std;
main(){
	//i++, i+=1, i=i+1
	for (int i=0;i<10;i++){ // variable inicio; finaliza ; incrementar o decrementar, va a ir de 0 hasta 9
		if (i==5){
			cout<<"if"<<endl;
			continue;
		}
		cout<<i<<endl; 	
	}
	
	cout<<"fuera del for "<<endl;
	system ("pause");
}
