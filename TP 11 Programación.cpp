#include <bits/stdc++.h>
using namespace std;
string Japonizar(string nombre);
int main()
{
	string nombre;
	cout<<"ingrese un nombre"<<endl;
	cin>>nombre;
	string n=Japonizar(nombre);
	cout<<"Konnichi wa "<<n<<"-san";
	return 0;
}
string Japonizar(string nombre)
{
	string NombreJaponizado;
	for(int i=0; i<nombre.size(); i++)
	{
		NombreJaponizado+=nombre[i];
		if(nombre[i]!='a'&& nombre[i]!='A'&& nombre[i]!='e'&& nombre[i]!='E'&& nombre[i]!='i'&& nombre[i]!='I'&& nombre[i]!='o'&& nombre[i]!='O'&& nombre[i]!='u'&& nombre[i]!='U'&& nombre[i]!='n'&& nombre[i]!='N')
		{
			NombreJaponizado+='u';
		}
	}
	return NombreJaponizado;
	}
