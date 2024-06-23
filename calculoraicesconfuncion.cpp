#include <iostream>
#include <cmath>
using namespace std;
void CalcularRaices(double a, double b, double c, double &raiz1, double &raiz2, bool &real){
	double discriminante=pow(b, 2)-4*a*c;
    if(discriminante>=0){
        real=true;
        raiz1=(-b+sqrt(discriminante))/(2 * a);
        raiz2=(-b-sqrt(discriminante))/(2 * a);
    }else{
    	real=false;
        raiz1=-b/(2 * a);
        raiz2=sqrt(-discriminante)/(2 * a);
    }
}
int main(){
	double raiz1, raiz2, a, b, c,raiz;
	bool real;
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
	CalcularRaices(a,b,c,raiz1,raiz2,real);
	if(real){
        cout<<"Las raices son reales:"<<endl;
        cout<<"La primera raiz es: "<<raiz1<<endl;
        cout<<"La segunda raiz es: "<<raiz2<<endl;
    }else{
        cout << "Las raices son complejas y conjugadas:" <<endl;
        cout << "La primera raiz es : "<< raiz1 <<" + "<<raiz2<<"i"<<endl;
        cout << "La segunda raiz es: "<< raiz1 <<" - "<<raiz2<<"i"<<endl;
    }

    return 0;
}