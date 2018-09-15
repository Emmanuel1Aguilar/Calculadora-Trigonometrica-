#include<iostream>
#include<conio.h>
#include<stdio.h>
//Nueva funcion para los angulos
#include<Cmath>
using namespace std;
int main()
{
	//declaramos las variables
	bool salir=false;
	double angulo, result;
	int tecla;
	do{
		cout<<"Ingrese el angulo: "<<endl;
		cin>>angulo;
		cout<<"Seleccione una funcion: "<<endl;
		cout<<"Presione la tecla C si quiere sacar el coseno "<<endl;
		cout<<"Presione la tecla S si quiere sacar el seno "<<endl;
		cout<<"Presione la tecla T si quiere sacar la tangente "<<endl;
		//Capturamos el valor de la tecla presionada
		// getch() es un comando para que lea el valor del teclado
		tecla= _getch();
		//Evaluamos la variable
		if(tecla==99 || tecla==67)
		{
			//Evaluamos el coseno 
			result= (cos(angulo*3.14159/180));
			//imprimimos el resultado
			cout<<"\n El coseno de "<<angulo<<" es "<<result<<endl;
		}
		//Evaluamos la variable
		if(tecla==115 || tecla==83)
		{
			//Evaluamos el seno 
			result= (sin(angulo*2.0*3.14159/360.0));
			//imprimimos el resultado
			cout<<"\n El seno de "<<angulo<<" es "<<result<<endl;
		}
		//Evaluamos la variable
		if(tecla==116 || tecla==84)
		{
			//Evaluamos la tangente
			result= (tan(angulo*2.0*3.14159/360.0));
			//imprimimos el resultado
			cout<<"\n La tangente de "<<angulo<<" es "<<result<<endl;
		}
		cout<<"\n Deseas ingresar otro angulo y/n"<<endl;
		tecla= _getch();
		//Evaluamos la tecla y/Y
		if (tecla==121 	|| tecla==89)
		{
			salir=false;
		}
		//Evaluamos la condicion si tecla es n/N
		if (tecla==110 || tecla==78)
		{
			salir=true;
		}
	}while(salir==false);
	getch();
	return 0;
}
