#include <iostream>
using namespace std;
#define tam1 2
#define tam2 3
//codigo que imprime en la matriz en todas las posiciones el numero 10
int main(int argc, char *argv[]) {
	int Matriz [tam1][tam2];
	for(int x=0; x<tam1; x++){
		for(int y=0; y<tam2; y++){
			Matriz [x][y]=10;
			cout<<Matriz[x][y]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

