#include <iostream>
using namespace std;


int main() 
{ 
	char sexo;
	cin >> sexo;
	
	if (sexo == 'F') 
	{
		cout << sexo << " - Feminino" << endl;
	}
	else if (sexo == 'M') 
	{
		cout << sexo << " - Masculino" << endl;
	}
	else 
	{
		cout << "Sexo invalido" << endl;
	}
}