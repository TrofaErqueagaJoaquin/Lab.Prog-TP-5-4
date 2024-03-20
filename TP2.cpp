#include<bits/stdc++.h>
using namespace std;
 int EsMayor(int a, int b, int c);

int main(){
int n1, n2, n3;
    cout<<"ingrese un numero"<<endl;
    cin>>n1;
    cout<<"ingrese un numero"<<endl;
    cin>>n2;
    cout<<"ingrese un numero"<<endl;
    cin>>n3;

    cout<<"el numero mayor es:"<<EsMayor(n1,n2,n3)<<endl;

    return 0;
}

int EsMayor(int a, int b, int c){
	int max;
	if(a>b && a>c){
		max=a;
	}
	if(b>a && b>c){
		max=b;
	}
	if(c>a && c>b){
		max=c;
}
    return max;
}