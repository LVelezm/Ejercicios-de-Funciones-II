#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double radio, area;
	cout<<"Ingrese el radio del circulo que desea calcular"<<endl;
	cin>>radio;
	area=M_PI * pow(radio,2);
	cout<<"El area de el circulo es: "<<area<<endl;
	return 0;
}
