#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
#define tam 5
	int Baloto[tam],Ale,Balota;
	bool igual = false;
	srand(time(NULL));
	Baloto[0]= rand()% 45+1;
	
	cout<<"su numero de Baloto es: ";
	cout<<Baloto[0]<<",";
	for(int x=1;x<tam;x++){
		Ale = rand ()% 45+1;
		for(int y=0; y<x;y++){
			if(Baloto[y]==Ale){
				igual = true;
				break;
			}
		}
		if(igual == true){
			x--;
			igual = false;
		}else{  
			Baloto[x] = Ale;
			cout<<Baloto[x]<<",";
		}
	}
	cout<<endl<<"y su numero de balota es: ";
		Balota = rand ()% 16+1;
		cout<<Balota;
		
	
	return 0;
}

