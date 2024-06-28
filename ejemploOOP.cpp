#include<bits/stdc++.h>
using namespace std;

class Persona {
	private:
	int edad;
	string nombre;
	
	public:
		Persona(string nom, int ed){
			this->nombre=nom;
			this->edad=ed;
		}
string getNombre() const{
	return nombre;
}
int getEdad() const{
	return edad;
}
};
int main(){
	int CantPers;
	vector<Persona> personas;
	cout<<"¿cuantas personas deseas ingresar? ";
	cin>>CantPers;
	for(int i=0;i<CantPers;i++){
		string nombre;
		int edad;
		cout<<"Ingrese el nombre de la persona "<<i+1<<" : ";
		cin>>nombre;
		cout<<"Ingrese la edad de la persona "<<i+1<<" : ";
		cin>>edad;
		
		Persona nuevapersona(nombre,edad);
		personas.push_back(nuevapersona);
	}
	cout<<"\n";
	cout<<"Datos de las personas ingresados"<<"\n";
	for(int i=0;i<CantPers;i++){
		Persona persona2=personas[i];
		cout<<"El nombre de la persona "<<i+1<<" es : "<<persona2.getNombre()<<" y su edad: "<<persona2.getEdad()<<"\n";
	}
	return 0;
}