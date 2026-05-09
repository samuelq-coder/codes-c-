#include <iostream>
using namespace std;

#define tam1 2
#define tam2 3
//codigo de imprimir en la matriz solo los numeros pares digitados por el ususario
int main(int argc, char *argv[]) {
	int Matriz [tam1][tam2],N;
	for(int x=0; x<tam1; x++){
		for(int y=0; y<tam2; y++){
			cout<<endl<<" Digite valor: ";
			cin>>N;
			if(N %2 ==0){
				Matriz [x][y]= N;
			}else{
				y--;
			}
			
		}
	}
	for(int x=0; x<tam1; x++){
		for(int y=0; y<tam2; y++){
			cout<<Matriz[x][y]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}

