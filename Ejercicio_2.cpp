#include<iostream>
#include<cstdlib>
#include<ctime>
#include<climits>
using namespace std;
int main(){
	
	bool entro= true;
	int menor=0, mayor=0 ;
	 float promedio=0;
	int matriz[6][7]; // Creando el array con numeros aleatorios
	for(int i=0;i<6;i++){
		for	(int j=0;j<7;j++){
			matriz[i][j] = rand() % 9 + 1;	
				
		}
	}	
	//Mostrando matriz
		for(int i=0;i<6;i++){
			
			for	(int j=0;j<7;j++){
				cout<<matriz[i][j] ;	
				
		    }cout<<endl;
      	}	
	//Calculando mayor y menor
		
		for(int i=0;i<6;i++){
			
			for	(int j=0;j<7;j++){
				if(mayor<matriz[i][j]){
					mayor=matriz[i][j];
				} 
				if(entro){
					menor=matriz[i][j];
					entro=false;
				}	
				
				if(menor>matriz[i][j]){
						menor=matriz[i][j];
				}	
			
					promedio += matriz[i][j];	
		    }
					entro=true;
					
						//Mostrando el resultado
						cout<<"Fila numero: "<<i+1<<endl;
						cout<<"Numero Mayor: "<<mayor<<endl;
						cout<<"Numero Menor: "<<menor<<endl;	
						cout<<"Promedio: "<<promedio/7<<endl;
						cout<<"----------------------"<<endl;
						mayor=0;
						promedio=0;
	    }
		
		
return  0;	
}

