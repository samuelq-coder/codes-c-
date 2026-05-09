#include <iostream>
#include <time.h>
using namespace std;
#define tam1 2
#define tam2 3

//codigo para imprimir en el amtriz numeros aleatorios entre el valor inicial y final
int main(int argc, char *argv[]) {
		int Matriz [tam1][tam2],Ale,vi,vf,Temp;
		srand (time(NULL));
		cout<<endl<<"Digite valor inicial ";
		cin>>vi;
		cout<<endl<<"Digite valor final ";
		cin>>vf;
		if(vi>vf){
			Temp = vf;
			vf = vi;
			vi = Temp;
		}
		for(int x=0; x<tam1; x++){
			for(int y=0; y<tam2; y++){
				Ale = rand()% (vf-vi+1)+vi;
				Matriz [x][y]= Ale;
				cout<<Matriz[x][y]<<"\t";
			}
			cout<<endl;
		}
		
		
	return 0;
}

