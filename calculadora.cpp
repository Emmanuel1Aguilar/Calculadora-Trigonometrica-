#include<iostream>
#include<conio.h>
#include<math.h>
#include<Cmath>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main ()
{
	int cual, otro, otra_suma, otra_suma2, potencia, tecla, sal;
	double num, numero, numero2, total=0, total2=0, resta, multiplicacion, division, tot, totall, angulo, resultado;
	int i=0;
    do
    {
    cout<<"\t\t\t     ______________________________ \t\t\t"<<endl;
    cout<<"\t\t\t    | ¿Que operacion deseas hacer? |\t\t\t"<<endl;
    cout<<"\t\t\t    |______________________________|\t\t\t"<<endl;
    cout<<"\t\t\t     ______________________________ \t\t\t"<<endl;
    cout<<"\t\t\t    |          OPERACIONES         |\t\t\t"<<endl;
    cout<<"\t\t\t    |______________________________|\t\t\t"<<endl;
	cout<<"\t\t\t    | 1- Suma                      |\t\t\t"<<endl;
	cout<<"\t\t\t    |______________________________|\t\t\t"<<endl;
	cout<<"\t\t\t    | 2- Resta                     |\t\t\t"<<endl;
	cout<<"\t\t\t    |______________________________|\t\t\t"<<endl;
	cout<<"\t\t\t    | 3- Multiplicacion            |\t\t\t"<<endl;
	cout<<"\t\t\t    |______________________________|\t\t\t"<<endl;
	cout<<"\t\t\t    | 4- Division                  |\t\t\t"<<endl;
	cout<<"\t\t\t    |______________________________|\t\t\t"<<endl;
	cout<<"\t\t\t    | 5- Raiz cuadrada             |\t\t\t"<<endl;
	cout<<"\t\t\t    |______________________________|\t\t\t"<<endl;
	cout<<"\t\t\t    | 6- Potencia                  |\t\t\t"<<endl;
	cout<<"\t\t\t    |______________________________|\t\t\t"<<endl;
	cout<<"\t\t\t    | 7- Funciones trigonometricas |\t\t\t"<<endl;
	cout<<"\t\t\t    |______________________________|\t\t\t"<<endl;
	cout<<"\t\t\t     R= ";
	cin>>cual;
	getch();
    system("cls");
    if (cual==1)
    {
    	cout<<"\t\t\tIngrese el primer numero: ";
    	cin>>num;
    	do
    	{
    	cout<<"\t\t\tIngrese el siguiente numero: ";
    	cin>>numero2;
    	total=total+numero2;
    	cout<<"\t\t\t¿Algun otro numero?"<<endl;
    	cout<<"\t\t\t  SI(1)     NO(2)  "<<endl;
  		cout<<" "<<endl;
	    cout<<"\t\t\t= ";
    	cin>>otro;
    	getch();
    	system("cls");
		} while(otro==1);
		total2=total+num;
    cout<<"\t\t\tLa suma es de "<<total2<<endl;
}
	else if (cual==2)
	{
	cout<<"\t\t\tIngrese el primer numero: ";
    cin>>num;
    cout<<"\t\t\tIngrese el segundo numero: ";
    cin>>numero2;
    resta=num-numero2;
    cout<<"\t\t\tLa resta es de "<<resta<<endl;
}
    else if(cual==3)
    {
	cout<<"\t\t\tIngrese el primer numero: ";
    cin>>num;
    cout<<"\t\t\tIngrese el segundo numero: ";
    cin>>numero2;
	multiplicacion=num*numero2;
	cout<<"\t\t\tEl resultado es de "<<multiplicacion<<endl;
	getch();
    system("cls");
	}
    else if(cual==4)
    {
    cout<<"\t\t\tIngrese el primer numero: ";
    cin>>num;
    cout<<"\t\t\tIngrese el segundo numero: ";
    cin>>numero2;
    division=num/numero2;
    cout<<"\t\t\tEl resultado es de "<<division<<endl;
    getch();
    system("cls");
	}
	else if(cual==5)
	{
	cout<<"Ingrese el numero al que le quiere sacar raiz cuadrada \t\t\t";
    cin>>num;
    tot=sqrt(num);
    cout<<"\t\t\tEl resultado es de "<<tot<<endl;
    getch();
    system("cls");
	}
	else if(cual==6)
	{
	cout<<"\t\t\tIngrese el numero que quiere elevar ";
    cin>>num;
    cout<<"\t\t\t¿A que potencia va a elevar el numero?";
    cin>>potencia;
    totall=pow(num,potencia);
    cout<<"\t\t\tEl resultado es de "<<totall<<endl;
    getch();
    system("cls");
	}
	else if(cual==7)
	{
		do
		{
		cout<<"\t\t\tIngrese el angulo: ";
		cin>>angulo;
		cout<<"\t\t\tSeleccione una funcion: "<<endl;
		cout<<"\t\t\tPresione la tecla C si quiere sadar el coseno "<<endl;
		cout<<"\t\t\tPresione la tecla S si quiere sacar el seno "<<endl;
		cout<<"\t\t\tPresione la tecla T si quiere sacar la tangente "<<endl;
		tecla= _getch();
		if(tecla==99 || tecla==67)
		{
			resultado= (cos(angulo*3.14159/180));
			cout<<"\t\t\t El coseno de "<<angulo<<" es "<<resultado<<endl;
		}
		if(tecla==115 || tecla==83)
		{ 
			resultado= (sin(angulo*2.0*3.14159/360.0));
			cout<<"\t\t\t El seno de "<<angulo<<" es "<<resultado<<endl;
		}
		if(tecla==116 || tecla==84)
		{
			resultado= (tan(angulo*2.0*3.14159/360.0));
			cout<<"\t\t\t La tangente de "<<angulo<<" es "<<resultado<<endl;
		}
		cout<<"\t\t\t¿Quieres ingresar otro angulo? "<<endl;
		cout<<"\t\t\t    SI(1)         NO(2)       "<<endl;
		cout<<"\t\t\t R= ";
		cin>>sal;
		getch();
        system("cls");
	}while(sal==1);
	}
	else
        cout<<"\t\t\tLa operacion que deseas hacer es incorrecta\t\t\t"<<endl;
    getch();
    system("cls");
	cout<<"\t\t\t¿Quieres hacer alguna otra operacion?"<<endl;
	cout<<"\t\t\t   SI(1)                    NO(2)   "<<endl;
	cout<<"\t\t\t R= ";
	cin>>i;
	getch();
    system("cls");
        } while(i==1);
	getch();
    return 0;
}
