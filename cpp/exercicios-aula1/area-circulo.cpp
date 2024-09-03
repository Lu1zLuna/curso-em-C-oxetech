#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

int main() 
{ 
	double raio;
	
	cin >> raio;
	
	double area = M_PI * powf(raio, 2);
	
	cout << "Raio do círculo: " << area << endl;
}