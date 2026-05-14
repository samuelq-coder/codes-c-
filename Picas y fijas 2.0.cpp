#include <iostream>
#include <time.h>
using namespace std;

#define tam 4
#define tam1 10
#define tam2 6
int main(int argc, char *argv[]) {
	int N,Nusu[tam],NumeroJuego[tam],Ale,Filas=0,Op=0, Picas=0, Fijas=0, Matriz[tam1][tam2];
	bool igual1 = false, igual2 = false;
	srand(time(NULL));
	
	//Numero aleatorio del juego de picas y fijas
	NumeroJuego[0] = rand()% 10;
	//ciclo para generar el Numero aleatorio del juego de picas y fijas
	for (int x=1;x<tam; x++){
		Ale = rand()% 10;
		for(int y=0; y<x; y++){
			if(NumeroJuego[y] == Ale){
				igual1 = true;
				break;
				
			}
		}
		if (igual1 == true){
			x--;
			igual1 = false;
		}else{
			NumeroJuego[x] = Ale; 
		}
	}
	//ciclo do while para que el usuario pueda hacer otro intento para adivinar el numero del juego
	do{
		Fijas = 0;
		Picas = 0;
		//ciclo para pedir digitos del numero del usuario
		for(int z=0; z<tam; z++){
			cout<<endl<<"Digite el "<<z+1<<" dígito de su numero: ";
			cin>>N;
			//restriccion para que el numero que digite no sea mayor a 9
			if(N<0 || N>9){
				cout<<endl<<" Numero fuera de rango, digite otro "<<endl;
				z--;
			}else{
				Nusu[z]=N;
				//ciclo for para poder comparar que no repita un numero
				for(int w=0; w<z; w++){
					if(Nusu[w] == Nusu[z]){
						igual2 = true;
						break;
					}
				}
				if (igual2 == true){
					cout<<endl<<" Dígito repetido, digite otro: "<<endl;
					z--;
					igual2= false;
				}
			}
		}
		//despues de digitar el numero completo se le aumentan el contador de oportunidades
		Op++;
		//ciclo for para poder saber cuantas fijas y picas se tienen 
		for(int x=0; x<tam; x++){
			if(NumeroJuego[x] == Nusu[x]){
				Fijas++;
			}else{
				for(int y=0; y<tam; y++){
					if(NumeroJuego[x] == Nusu[y]){
						Picas++;
						break;
					}
				}
			}
		}
		//if para que el historial vaya "subiendo" o reemplazandose en las filas si se llega al limite de las filas(10)
		if(Filas==tam1){
			for(int x=0;x<tam1-1;x++){
				for(int y=0; y<tam2;y++){
					Matriz[x][y]=Matriz[x+1][y];
					
				}
			}
			Filas--;
		}
		//ciclo for para que se asigne el numero que digito el usuario en la matriz va hasta la casilla 3
		for(int y=0; y<tam; y++){
			Matriz[Filas][y] = Nusu[y];
		}
		//asignacion de los valores de picas y fijas en las ultimas dos casillas de la matriz
			Matriz[Filas][4]=Picas;
			Matriz[Filas][5]=Fijas;
			Filas++;
			
		cout<<endl<<"==============================================="<<endl;
		cout<<endl<<"=======Numero Digitado======== Picas    Fijas  "<<endl;
		//ciclo para mostrar la matriz
		for(int x=0; x<Filas; x++){
			for(int y=0; y<tam2; y++){
				cout<< Matriz[x][y]<<"\t";
			
			}
			cout<<endl;
			
			
		}
		//mostrar los resultados del momento
		cout<<endl<<"Tienes "<<Fijas<<" fijas y "<<Picas<<" picas "<<endl;
		// if para determinar si ya acerto el numero del juego
		if(Fijas == tam){
			cout<<endl<<"Lo lograste en "<<Op<<" intentos ";
		}
		
		//condicion de while para que el usuario pueda volver a intentar si es que no acerto el numero de juego
	}while(Fijas!= tam);
	
	return 0;
}

