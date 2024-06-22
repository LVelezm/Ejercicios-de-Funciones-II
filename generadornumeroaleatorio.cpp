#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int maxnum, cantidad;
	cout<<"Ingrese la cantidad de numeros a generar"<<endl;
	cin>>cantidad; 
	cout<<"Ingrese el maximo numero del que saldran los numeros aleatorios "<<endl;
	cin>>maxnum;
	for(int i=0; i < cantidad ;i++){
		int num_aleatorio=rand()%(maxnum+1);
		cout<<num_aleatorio;
	}
	return 0; 
}
