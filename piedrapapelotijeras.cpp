#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void piedrapapeltijera(){
	string opciones[3]={"piedra","papel", "tijeras"};
	int puntaje_personal=0;
	int puntaje_pc=0;
	while (puntaje_personal<3&&puntaje_pc<3){
		cout<<"Elige una opcion:"<<endl;
        cout<<"1. Piedra"<<endl;
        cout<<"2. Papel"<<endl;
        cout<<"3. Tijeras"<<endl;
    	int eleccion;
		cin>>eleccion;
		string jugada=opciones[eleccion - 1];
		srand(time(0));
        string jugadapc=opciones[rand() % 3];
        cout<<" "<<endl;
        cout<<"Tu eleccion: " << jugada <<endl;
        cout<<"Eleccion del pc: "<<jugadapc<<endl;
        if(jugada==jugadapc){
            cout<<"Empate en esta ronda"<<endl;
        	}else if((jugada=="piedra"&&jugadapc=="tijeras")||(jugada=="papel"&&jugadapc=="piedra")||(jugada=="tijeras"&&jugadapc=="papel")){
            cout<<"Ganaste la ronda"<<endl;
            puntaje_personal++;
        	}else{
            cout<<"Gano el pc esta ronda"<<endl;
            puntaje_pc++;
        	}
        cout<<"Tu puntaje actual: "<< puntaje_personal << " PC: "<<puntaje_pc<<endl;
    }
    if(puntaje_personal>puntaje_pc){
        cout<<"Has ganado el juego"<<endl;
    }else if(puntaje_pc>puntaje_personal){
        cout<<"El pc ha ganado el juego, eres un perdedor"<<endl;
    }else{
        cout<<"El juego terminó en empate"<<endl;
    }
}

int main(){
    piedrapapeltijera();
    return 0;
}
