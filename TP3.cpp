#include<bits/stdc++.h>
using namespace std;
 int ContarVocalesA(string f);
 
 int main(){
 string frase;
int cont;
 	cout<<"ingrese una frase"<<endl;
 	getline(cin, frase);

cont=ContarLetraA(frase)

 	cout<<"la cantidad de letras A es de: "<<ContarVocalesA(frase)<<endl;
 	return 0;
 }

 int ContarVocalesA(string f){
 	int i;
 	int cont=0;
 	for(i=0;i<f.size();i++){
 		if(f[i]=='A'||f[i]=='a'){
	 cont++; 
	 }
}
	 return cont;

}
