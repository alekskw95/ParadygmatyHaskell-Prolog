#include<iostream>
using namespace std;
#include<cstdlib>
#include <conio.h>
#include <string>
#include <iomanip> 

bool Function1(string value)
{
	int suma = 0;

	for (int i = 0; i < value.length(); i++)
	{
		suma += value[i];
	}


	int lastValue = value[value.length() - 1];

	if (suma % 3 == 0 && lastValue % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}


bool czyJestLitera(string str) 
{
	for (char ch : str)
		if (!isdigit(ch)) return false;
	return true;
}

void Function3(int value)
{
	for (int i = value; i > 0; i--)
	{

	}
}

int main()
{
	//Zadanie 1a
	cout << "Zadanie 1a" << endl;
	int x;
	cout << "Podaj liczbe: ";
	cin >> x;

	for (int i = 0; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int p = 1; p <= x - 2; p++)
	{
		cout << " ";
	}

	cout << endl;

	//Zadanie 1b
	cout << "Zadanie 1b" << endl;
	int h;
	cout << "Wprowadz wysokosc choinki: ";
	cin >> h;
	cout << endl;

	for (int i = 0; i <= h; i++)
	{
		for (int k = 1; k <= h - i; k++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}


	cout << endl;

	//Zadanie 2
	cout << "Zadanie 2" << endl;
	int wysokosc, szerokosc, wysokoscT, szerokoscT;
	///*wysokosc = 9;
	//szerokosc = 8;
	//wysokoscT = 6;
	//szerokoscT = 2;*/

	cout << "Wprowadz wysokosc litery: ";
	cin >> wysokosc;
	cout << endl;
	cout << "Wprowadz szerokosc litery: ";
	cin >> szerokosc;
	cout << endl;
	cout << "Wprowadz wysokosc trzonu litery: ";
	cin >> wysokoscT;
	cout << endl;
	cout << "Wprowadz szerokosc trzonu litery: ";
	cin >> szerokoscT;
	cout << endl;

	for (int k = 0; k < wysokosc; k++)
	{
		if (k < wysokoscT)
		{
			for (int t = 0; t < szerokoscT; t++)
			{
				cout << "X";
			}
			cout << endl;
		}
		else
		{
			for (int t = 0; t < szerokosc; t++)
			{
				cout << "X";
			}
			cout << endl;
		}

	}

	cout << endl;

	// Zadanie 3
	cout << "Zadanie 3" << endl;
	int tab[10];

	for (int n = 0; n < 10; n++)
	{
		tab[n] = rand() % 100 + 1; 
		cout << tab[n] << " ";
	}
	cout << endl;
	int minValue = tab[0];
	int maxValue = tab[0];

	for (int i = 1; i < 10; i++)
	{
		if (tab[i] < minValue)
		{
			minValue = tab[i];
		}
	}
	cout << "MinValue: " << minValue << endl;

	for (int i = 1; i < 10; i++)
	{
		if (tab[i] > maxValue)
		{
			maxValue = tab[i];
		}
	}
	cout << "MaxValue: " << maxValue << endl;

	cout << endl;

	//Zadanie 4
	cout << "Zadanie 4" << endl;
	cout << "Podaj liczbe: ";
	string myValue;
	cin >> myValue;


	bool ifLitery = czyJestLitera(myValue);

	if (ifLitery == false)
	{
		cout << "Litery w ciagu" << endl;
	}
	else
	{
		bool ifModSix = Function1(myValue);

		if (ifModSix == true)
		{
			cout << "Podzielna" << endl;
		}
		else
		{
			cout << "Niepodzielna" << endl;
		}

	}

	cout << endl;

	//Zadanie 5
	cout << "Zadanie 5" << endl;
	cout << "Podaj liczbe " << endl;
	int sqrtValue;
	cin >> sqrtValue;
	cout << endl;

	float result = (sqrt(sqrtValue) + 1) / 2;

	cout << "Wynik: " << setprecision(3) << result << endl;

	float z = 2.0;
	float poprzednik = 1.0;
	
	while (abs(z - poprzednik) >= 0.01)
	{
		poprzednik = z;
		z = 1.0 + (1.0 / poprzednik);
	}

	cout << "Wynik: " << z << endl;




	system("PAUSE");
}