#include<bits/stdc++.h>
using namespace std;
bool EsMultiploDe3(int n);


int main(){
	int num;
    string msg="no es multiplo";
	cout<<"ingrese numero"<<endl;
	cin>>num;
	if(EsMultiploDe3(num)){
		msg="es multiplo";
	}
	cout<<msg<<endl;
	
}
bool EsMultiploDe3(int n)
{
    bool flag=false;
      if(n%3==0)
	{
		flag=true;
	}
	return flag;
}