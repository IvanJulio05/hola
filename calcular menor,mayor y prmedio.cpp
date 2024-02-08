#include<iostream>
#include<stdlib.h>

using namespace std;
//problema 1
int main(){
	int numero=0;
	bool seguir=true;
	bool entrar=true;
	int menor=0,mayor=0;
	float promedio=0;
	int contador=0;
	int opcion;
	bool verificar=true;
	
	while(seguir){
		cout<<"Digite un numero: ";cin>>numero;
		
		//guardando el primer numero como menor
		if(entrar){
			menor=numero;
			entrar=false;
		}
		
		//obteniendo numero menor
		if(menor>numero){
			menor=numero;
		}
		
		//obteniendo numero mayor
		if(mayor<numero){
			mayor=numero;
		}
		
		//haciendo la suma de todos los numeros
		promedio+=numero;//suma
		contador++;//cantidad de numeros
		cout<<"digite 1 para continuar o 0 para terminar:";cin>>opcion;
		while(verificar){			
			
			if(opcion!=0 && opcion!=1){
				cout<<"digite 1 para continuar o 0 para terminar:";cin>>opcion;
			}
			else{
				
				seguir=opcion;
				verificar=false;
				
			}			
		}
		verificar=true;

		
	}
	
	cout<<"Promedio: "<<promedio/contador<<endl;
	cout<<"Numero MAYOR: "<<mayor<<endl;
	cout<<"Numero MENOR: "<<menor<<endl;
	
	
	system("pause");
	return 0;
}
