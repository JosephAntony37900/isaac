#include<iostream>

using namespace std;

void suma(){
	int num1, num2, suma;
	char resultado;
	
	cout<<"Deseas hacer una suma? S/N"<<endl;
	cin>>resultado;
	
	cout<<"Tu respuesta fue: " <<resultado <<endl;
	
	cout<<"Ingrese el pirmer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	// wazaaa
	suma= num1 + num2;
	
	cout<<"La suma de " <<num1 << " y "<<num2 <<" es: "<<suma <<endl;
}

main(){
	suma();
}