#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
	srand (time(NULL));
	
	int vi,vf,N,ale,temp,op=0;
	cout<<endl<<" ======= NUMERO MAGICO ======= "<<endl;
	cout<<endl<<" INTENTE ADIVINAR EL NUMERO MAGICO "<<endl;
	cout<<endl<<" Digite valor inicial ";
	cin>>vi;
	cout<<" Digite un valor final ";
	cin>>vf;
	
	if(vi>vf){
		temp=vf;
		vf=vi;
		vi=temp;
	}
	ale = rand()%(vf-vi+1)+vi;
	cout<<endl<<" ========================================== "<<endl;
	do{
		cout<<endl<<" Digite un numero: ";
		cin>>N;
		op++;
		if(N<ale){
			cout<<endl<<" digite un numero mayor: "<<endl;
		}else{
			if(N>ale){
				cout<<endl<<" Digite un numero menor: "<<endl;
			}else{
				
			}
		}
	} while(N<ale or N>ale);
	cout<<endl<<" felicitaciones acertó el numero magico "<<endl<<" Lo Lograste en "<<op<< " intentos ";
	
	return 0;
}

