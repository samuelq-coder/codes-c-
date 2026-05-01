#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char *argv[]) {
	srand (time(NULL));
	int Nusu,cantidad,ale,G=0,P=0;
	cout<<endl<<" Digite 1 para jugar con numeros bajos: (1-3) o Digite 2 para jugar con numeros altos: (4-6): ";
		cin>>Nusu;
	cout<<endl<<" Digite cuantos veces quiere jugar: ";
	cin>>cantidad;
	for (int x=1; x<=cantidad;x++){
		ale = rand()%6+1;
		cout<<endl<<ale;
		if ((Nusu ==1 && ale<=3) || (Nusu ==2 && ale>=4)){
		cout<<" ganaste ";
		G++;
	}else{
			cout<<" perdiste ";
			P++;
		}
	}
		if (G>P){
			cout<<endl<<" !!ganaste "<<G<<" veces de "<<cantidad<<" veces "<<endl<<" Felicitaciones!! ";
		}else{
			if(G==P){
				cout<<endl<<" !!Empataste "<<"Ganaste "<<G<<" veces "<<"y perdiste "<<P<<" veces ";
			}else{
			cout<<endl<<" !!Perdiste "<<P<<" veces de "<<cantidad<<" veces "<<endl<<" lo sentimos ";
			}
		}
	return 0;
}

