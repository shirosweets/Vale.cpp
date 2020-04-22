#include <iostream>
#include <iomanip>
using namespace std;
/*
Alumna: Valentina Solange Vispo.
Matricula/DNI: 42.475.060
*/

const int N=50;
void cargar_matriz (int x, int matrizv[N][N]);
void Perimetro (int [N] [N], int, int&, int&);
void EncontrarMax (int [N] [N], int, int&, int&);
void Evoluciona (int matriz_Evo[N][N], int a, int b, int c, int d);
void mostrar_matriz (int tamano_matrizp, int matrizp[N][N]);

int main ()
{
	int matriz[N][N], suma1=0, contar=0, max, posicion;
	int matriz_peri[N][N], matrizEvo [N][N], tamano_matriz=0;
	cout<<"Ingrese la dimension que desea para el arreglo: ";
	cin>>tamano_matriz;
	while (tamano_matriz<0 || tamano_matriz>50)
	{
		cout<<" Ingreso un valor de dimension invalido!!";
		cout<<endl<<" Ingrese un valor mayor a 0 y menor a 50: "<<endl;	
		cin>>tamano_matriz;
	}
	//int matrizv[tamano_matriz][tamano_matriz];
	cargar_matriz(tamano_matriz, matriz);	
	mostrar_matriz (tamano_matriz, matriz);
	Perimetro (matriz, tamano_matriz, suma1, contar);
	cout<<endl<<"La suma de los valores del perimetro de la matriz es igual a: "<<suma1;
	cout<<endl<<"Y la cantidad de elementos que se sumaron fueron: "<<contar;
	EncontrarMax (matriz, tamano_matriz, max, posicion);
	cout<<endl<<"El max es: "<<max<<" y la posicion de fila en el arreglo es: "<<posicion<<endl;
	//matrizEvo=matriz;
	// Evoluciona (int matriz_Evo [N][N], int a, int b, int c, int d)
	//Evoluciona (matriz_Evo, suma1, contar, max, posicion);
}

// Definiciones de Funciones

void cargar_matriz(int x, int matrizv[N][N]) // Carga la matriz;
{
	for (int i=0; i<x; i++) // Recorre filas del arreglo;
	{
		for (int j=0; j<x; j++) // Recorre columnas del arreglo;
		{

		cout<<endl<<"Ingrese el elemento "<<"("<<i<<","<<j<<") (fila "<<i<<" y columna ";
		cout<<j<<"): ";
		cin>>matrizv[i][j];
		while (matrizv[i][j]<0 || matrizv[i][j]>100)
		{
			cout<<" Ingreso un valor invalido!!";
			cout<<endl<<" Ingrese un valor mayor a 0 y menor a 100: "<<endl;	
			cin>>matrizv[i][j];
		}
		}
	}
}

void mostrar_matriz (int tamano_matrizp, int matrizp[N][N]) // Muestra la matriz en consola
{
	for (int i=0; i<tamano_matrizp; i++)
	{
		cout<<endl;
		for (int j=0; j<tamano_matrizp; j++)
		{
			cout<<setw(3)<<matrizp[i][j];
		}
	}
}

// Funcion 1
void Perimetro (int matriz_perimetro[N][N], int tamano, int&suma1, int&contar)
{
	// Recorre el perimetro de la matriz
	for (int i=0; i<tamano; i++) // 0-2
	{
		for (int j=0; j<tamano; j++) // 0-2
		{
			if (i==j && j!=0 && j+1!=tamano)
			{
				cout<<endl;
			}
			else
			{
				suma1+=matriz_perimetro[i][j];
				contar+=1;
			}
		}
	}
}

// Funcion 2
void EncontrarMax (int matriz2[N][N], int tamano, int&max, int&posicion)
{
	max=matriz2[0][0];
	//int posicion[tamano];
	//Recorrer la diagonal principal
	for (int i=0; i<tamano; i++)
	{
		for ( int j=1; j<tamano; j++)
		{
			if (i==j)
			{
				if (matriz2[i][j]>max)
				{
					max=matriz2[i][j];
					posicion=j;
				}
				posicion=j;
			}
		}
	}
} 

// Funcion 3
/*
void Evoluciona (int matriz_Evo [N][N], int a, int b, int c, int d)
					// (matriz_Evo, suma1, contar, max, posicion)
{
	matriz_Evo/(suma*
}  */


// Copiado y pegado (ignorar)
	/*for (int i=0; i<tamano_matriz; i++)
	{
		cout<<endl;
		for (int j=0; j<tamano_matriz; j++)
		{
			cout<<setw(3)<<matriz[i][j];
		}
	}*/
