#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
#define tam 4
	int NumeroP[tam],Nusu,Nusuario[tam],Ale,Op=0, Picas=0, Fijas=0; //NumeroP es el numero definido del juego
	bool igual1 = false, igual2 = false;
	srand(time(NULL));
	// se genera el primer numero aleatorio ya que no se necesita compararlo con otro, no es necesario compararlo
	NumeroP[0] = rand()% 10;
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
			}
		}
		//se reinician las picas y fijas para que en el nuevo intento del usuario se vuelvan a miarar las fijas y picas desde 0
		//y el ciclo do-while para que se le deje al usuario intentar adivinar el numero definido 
		do{
			Fijas = 0;
			Picas = 0;
			for(int z=0; z<tam; z++){
				cout<<endl<<"Digite el "<<z+1<<" dígito de su numero: ";
				cin>>Nusu;
				Nusuario[z]=Nusu;
				
				for(int w=0; w<z; w++){
					if(Nusuario[w] == Nusuario[z]){
						igual2 = true;
						break;
					}
				}
				if (igual2 == true){
					cout<<endl<<" Dígito repetido, digite otro: ";
					z--;
					igual2= false;
				}
			}
			Op++;
			for(int x=0; x<tam; x++){
				if(NumeroP[x] == Nusuario[x]){
					Fijas++;
				}else{
					for(int y=0; y<tam; y++){
						if(NumeroP[x] == Nusuario[y]){
							Picas++;
							break;
						}
					}
				}
			}
			cout<<endl<<"Tienes "<<Fijas<<" fijas y "<<Picas<<" picas ";
			if(Fijas == tam){
				cout<<endl<<"Lo lograste en: "<<Op<<" intentos ";
			}
		}while(Fijas!= tam);
	
	return 0;
}

