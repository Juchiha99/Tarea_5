#include<iostream>
#include<conio.h>
// insercion binaria por busqueda
using namespace std;

int main (){
	int numero, puntero=0, final=9, mitad, vec[10]= {3,8,11,22,38,49,50,56,62,70};
	bool encontro= false;
	
	cout<<"porfavor ingresar numero";
	cin>> numero;
	
	while (!encontro && puntero <= final){
		
		mitad = (int)((puntero + final) / 2);
		
		if(numero == vec[mitad])
		  encontro = true;
		  
		else if(numero < vec[mitad])
		  		final = mitad - 1;	
		  	else
			    puntero = mitad + 1;			  	
	}
	if (encontro)
		cout << "el dato se encontro y se encuentra en la pocision"<< mitad + 1;
	else 
		cout << "el dato no se encontro";
		
	getch();
}
