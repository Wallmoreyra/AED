/*
TP-01-B Operaciones
Walter Moreyra
22/4/2022
*/

#include <iostream>

using namespace std; 

int main(){
	
	//declaracion de variables, igualando res al no ser una variable de ingreso
	double n1, n2, res = 0;
	
	cout<<"\nIngrese un numero: ";
	cin>>n1;
	
	cout<<"\nIngrese otro numero: ";
	cin>>n2; 
	
	res = n1 + n2;
	
	cout<<"\n";
	cout<<"la suma de los numeros es: \n\n";
	
	cout << n1 << " + " << n2 << " = " << res; 
	
	
	
	return 0;
}
