#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int opc,Retirar,Consignar,Saldo=0, saldoac;
	do{
		cout<<" Menu\n\n1. Consultar saldo\n2. Retirar\n3. Consignar\n4. Salida\n\ndigite su opcion: ";
		cin>>opc;
		switch(opc){
	case 1 : cout<<" consultando saldo... "<<endl<<" tiene en su cuenta $"<<saldoac;
	break;
	case 2 : cout<<" Valor a retirar ";
	cin>>Retirar;
	if(Retirar>saldoac){
		cout<<" fondos insuficientes ";
	}else{
		cout<<" Retirando... "<<endl<<" se retiro el monto ";
		saldoac = saldoac - Retirar;
		cout<<" su saldo actual es de: $"<<saldoac;
	}
	break;
	case 3 : cout<<" Digite el valor que desea consignar ";
	cin>>Consignar;
	Saldo= Saldo + Consignar;
	saldoac= Saldo;
	cout<<" su saldo actual es de: $"<<saldoac;
	break;
	}
	
	} while(opc !=4);
	return 0;
}

