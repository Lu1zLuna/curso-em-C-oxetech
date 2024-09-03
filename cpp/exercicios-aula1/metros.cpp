#include <iostream>

using namespace std;

int main() 
{
	int centimetros, metros;
	
	cout << "Escreva um valor em centimetros para ser convertido em metros: " << endl;
	cin >> centimetros;
	
	metros = centimetros * 100;
	
	cout << metros << endl;
}