#include <iostream>
using namespace std;
// este codigo se utiliza para hallar el cubo o cuarado de cada numero que digite el usuario

int main(int argc, char *argv[]) {
	int N,Resultado;
	cout<<endl<<" Digite un numero ";
	cin>>N;
		if (N%2 ==0){
			cout<<endl<<" su numero es par ";
			Resultado=N*N;
			cout<<endl<<" y su cuadrado es: "<<Resultado;
		}else{
			cout<<endl<<" su numero es impar ";
			Resultado=N*N*N;
			cout<<endl<<" y su cubo es: "<<Resultado;
		}
	return 0;
}

