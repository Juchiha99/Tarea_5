#include<iostream>
#include<stdlib.h>
using namespace std;
 
int main()
{
	cout<<"hice un cambio";
    int A[100],j,item,temp,i,k,n;
    cout<<"Ingresa la cantidad de elementos: ";
    cin>>n;
    for(i=1;i<=n;i++)
    cin >> A[i];
 
    for(k=n;k>0;k--)
    {
        for(i=1;i<=k;i++)
        {
            item=A[i];
            j=i/2;
            while(j>0 && A[j]<item)
            {
                A[i]=A[j];
                i=j;
                j=j/2;
            }
            A[i]=item;
        }
        temp=A[1];
        A[1]=A[k];
        A[k]=temp;
    }
    cout<<"El orden del ordenamiento headsort es:"<<endl;
    for(i=1;i<=n;i++)
    cout<<A[i] << endl;
    
    system("pause");
    return 0;
}
