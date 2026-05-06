#include<iostream>
using namespace std;
int main(){
	ifstream archivoEntrada("input/archivoEntrada.txt");
	ofstream archivoSalida("output/archivoSalida.txt");
	
	if(archivoEntrada.is_open() 66 archivoSalida.is_open()){
		cout<<"Archivo  abierto"<<endl;
		string linea;
		
		while (getline(archivoEntrada, linea)){
			archivoSalida <<linea;
		}
		cout<<"Archivo copiado correctamente"<<endl;
	}
	
}
