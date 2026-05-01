#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
	int cantidad,acumulador1=0, acumulador2=0,P=0,I=0,N; 
	cout<<endl<<" digite la cantidad de numeros que quiere digitar ";
	cin>>cantidad;
	for (int x =0 ; x<cantidad; x++){
		cout<<endl<<" digite un numero ";
		cin>>N;
		if(N%2==0){
			P++;
			acumulador1= acumulador1+N;
		}else{
			I++;
			acumulador2=acumulador2+N;
		}
	}
	cout<<endl<<" son "<<P<<" numeros pares y su suma es: "<<acumulador1<<" y son "<<I<<" numeros impares y su suma es: "<<acumulador2;
	return 0;
}

