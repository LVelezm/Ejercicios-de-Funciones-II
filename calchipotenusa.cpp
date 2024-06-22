#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double cateto1, cateto2;
	double hipotenusa;
	cout<<"Ingrese el primer cateto del triangulo rectangulo"<<endl;
	cin>>cateto1;
	cout<<"Ingrese el segundo cateto del triangulo rectangulo"<<endl;
	cin>>cateto2;
	hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
	cout<<"La hipotenusa del triangulo es: "<< hipotenusa <<endl;
	return 0;
	
}
