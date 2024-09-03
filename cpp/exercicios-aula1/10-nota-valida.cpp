#include <iostream>
using namespace std;

int main()
{
	float nota;

	do
	{
		cout << "Digite uma nota entre 0 e 10: ";
		cin >> nota;

		if (nota < 0 || nota > 10)
		{
			cout << "Valor invalido. A nota deve estar entre 0 e 10.\n";
		}

	} while (nota < 0 || nota > 10);

	cout << "Nota valida informada: " << nota << endl;

	return 0;
}