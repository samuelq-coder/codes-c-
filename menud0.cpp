#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
#define tam 3
	int opc,N,Arreglo[tam];
	bool Bandera = false;
	do{
		cout<<endl<<"Menu\n\n1. Guardar Numeros\n\n2. Mostrar Numeros\n\n3. Salir\n\nDigite su opcion: ";
		cin>>opc;
		switch (opc){
		case 1 : for(int x=0; x<tam; x++){
			cout<<endl<<"Digite el numero que quiere guardar: ";
			cin>>N;
			Arreglo[x]=N;
		}
		Bandera = true;
		cout<<endl<<" ==== Numeros Guardados ==== "<<endl;
		break;
		case 2: if(Bandera == false){ 
			cout<<endl<<"Tiene que guardar primero los numeros ";
		}else{ 
			cout<<endl<<"=== Mostrando informacion... ===";
			for(int x=0; x<tam; x++){
				cout<<endl<<Arreglo[x];	
		}
			
		}
		break;
		case 3 : cout<<endl<<"=== Saliendo ===";
		break;
		default : cout<<endl<<"=== Opcion invalida ===";
		}	
	}while(opc != 3);
		

	return 0;
}

