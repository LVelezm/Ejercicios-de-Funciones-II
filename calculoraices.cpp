#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double raiz1, raiz2, a, b, c,raiz;
	cout<<"Ingrese el primer coeficiente de la ecuacion cuadratica: "<<endl;
	cin>>a;
	cout<<"Ingrese el segundo coeficiente de la ecuacion cuadratica: "<<endl;
	cin>>b;
	cout<<"Ingrese el tercer coeficiente de la ecuacion cuadratica: "<<endl;
	cin>>c;
	if(a==0){
    cout<<"El coeficiente a no puede ser cero en una ecuacion cuadratica."<<endl;
    return 1; 
	}
	double discriminante=pow(b,2)-4*a*c;
	if (discriminante > 0) {
	raiz1=(-b+sqrt(discriminante))/(2*a);
	raiz2=(-b-sqrt(discriminante))/(2*a);
	cout<<"la primera raiz es: "<<raiz1<<endl; 
	cout<<"la segunda raiz es: "<<raiz2;
	return 0;
	}else if(discriminante==0){
		double raiz = -b / (2 * a);
		cout<<"las dos raices son: "<<raiz<<endl;
	}else{
		double parteReal = -b / (2 * a);
    	double parteImaginaria = sqrt(-discriminante) / (2 * a);
    	cout << "Las raices son complejas y conjugadas:"<< endl;
    	cout<<"la primera raiz es: "<<parteReal<<"+"<<parteImaginaria<<"i"<<endl;
		cout<<"la segunda raiz es: "<<parteReal<<"-"<<parteImaginaria<<"i"<<endl;
		return 0;
	}
}
