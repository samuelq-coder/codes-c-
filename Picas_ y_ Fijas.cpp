#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
#define tam 4
	int NumeroP[tam,N,Ale,Op=0;
	bool igual1 = false, igual2 = false;
	srand(time(NULL));
	// se genera el primer numero aleatorio ya que no se necesita compararlo con otro, no es necesario compararlo
	NumeroP[0] = rand()% 10;
	cout<<endl<<NumeroP[0]<<",";
	//ciclo for de el numero definido de picas y fijas, el ciclo sirve para generara los numeros aleatoriamente 
	//y el segundo ciclo for es para verficar que los numeros aleatorios no se repitan
		for (int x=1;x<tam; x++){
			Ale = rand()% 10;
			for(int y=0; y<x; y++){
				if(NumeroP[y] == Ale){
					igual1 = true;
					break;
					
				}
			}
			if (igual1 == true){
				x--;
				igual1 = false;
			}else{
				NumeroP[x] = Ale;
				cout<<endl<<NumeroP[x];
			}
		}
		/*ahora hay que hacer que el usuario digite un numero verificar que este digitando un numero sin ninguna repetecion en algun digito
		y a base del numero digitado se tiene que dar respuesta de cuantos digitos son picas o fijas
		*/
	
	return 0;
}

