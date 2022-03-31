#include <iostream>
#define MAX 50

using namespace std;
void leerArray(int n,int x[]);
void Listado(int n,int x[]);
void Burbuja(int n,int x[]);
int bBinaria(int n,int x[],int t);
int bBinariaRecur(int izq,int der,int x[],int t);
int main()
{
    int n,x[MAX],t,pos;
    cout<<"Nro de elementos: ";cin>>n;
    leerArray(n,x);
    Burbuja(n,x);
    Listado(n,x);
    cout<<"Elemento a buscar: ";cin>>t;
    pos = bBinariaRecur(0,n-1,x,t);
    if(pos==-1) cout<<"No se encuentra"<<endl;
    else cout<<"Lo encontre en la posicion: "<<pos<<endl;
    
    return 0;
}

void leerArray(int n,int x[])
{
    for(int i=0;i<n;i++)
    {
        cout<<"Elemento "<<i<<": ";
        cin>>x[i];
    }
}

void Listado(int n,int x[])
{
    for(int i=0;i<n;i++)
    {
        cout<<"Elemento "<<i<<": "<<x[i]<<endl;
    }
}

void Burbuja(int n,int x[])
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            if(x[j-1]>x[j])
            {
                temp = x[j-1];
                x[j-1] = x[j];
                x[j] = temp;
            }
        }
    }
}

int bBinaria(int n,int x[],int t)
{
    int mitad,izq,der;
    izq=0;der=n-1;
    while(izq<=der)
    {
        mitad = (izq+der)/2;
        if(t>x[mitad])izq = mitad+1;
        else if(t<x[mitad]) der = mitad-1;
        else return mitad;
    }
    return -1;
}

int bBinariaRecur(int izq,int der,int x[],int t)
{
	int m;
	if(izq<=der)
	{
		m = (izq+der)/2;
		if(t>x[m])
		{
			bBinariaRecur(m+1,der,x,t);
		}
		else if(t<x[m])
		{
			bBinariaRecur(izq,m-1,x,t);
		}
		else return m;
	}
	return -1;
}