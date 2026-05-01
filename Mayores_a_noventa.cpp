#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
#define tam 6
	srand(time(NULL));
	int Arreglo[tam], Mayores=0;
	float Prom =0;
	bool Bandera = false;
	for(int x =0; x<tam; x++){
		Arreglo[x] = rand()% 100;
		cout<<endl<<Arreglo [x];
		Prom = Prom + Arreglo[x];
		if(Arreglo[x] >= 90){
			Bandera = true;
			Mayores++;
			
		}
	}
	if(Bandera ==true){
	cout<<endl<<"Hay "<<Mayores<<" Numeros mayores a noventa ";
	}else{
	cout<<endl<<"No hay numeros mayores a noventa ";
	}	
	cout<<endl<<"Y el promedio de estos numeros es de: "<<Prom/tam;
	
	return 0;
}

