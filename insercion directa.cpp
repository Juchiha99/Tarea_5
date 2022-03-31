
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int arr[50]; //  6 4 4 3 2 1 
	int i,posicionactual,valorposicion,n;
	cout<< "Cuantos numeros quieres usar: "; cin >> n;
	for (i=0; i<n ; i++){
		cout<<"INGRESA EL NUMERO No. "<< i << ": "; cin >> arr[i];
	} 
	   for(i=0; i<n ; i++){
	   	posicionactual = i;
	   	valorposicion = arr[i];
	   	  while ((posicionactual > 0)&&(arr[posicionactual-1]>valorposicion)){
	   	  	 arr[posicionactual] = arr[posicionactual-1];
	   	  	 posicionactual--;
			 }
                        arr[posicionactual] = valorposicion;                  	   
	   }
	
	cout<< "\nLOS NUMEROS ORDENADOS: ";
	for(i=0; i<n; i++){
		cout << "\n" << arr[i];
	}
	
	cout << endl;
	system("pause");
	return 0;
}
