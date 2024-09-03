#include <iostream>
using namespace std;

int main()
{
	char letra;
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	string vogais = "AEIOUaeiou";
	
	if (!isalpha(letra)) 
	{
		cout << " nao eh uma letra.";
	}
	else if (vogais.find(letra) != string::npos) 
	{
		cout << letra << " eh uma vogal.";
	}
	else 
	{
		cout << letra << " eh uma consoante.";
	}
}