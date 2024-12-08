#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "");
	/*
	for (int i = 0; i < 500; i++)
	{
		cout << i + 1 << endl;
	}

	for (int i = 500; i > 0; i--)
	{
		cout << i << endl;
	}
	*/
	/*
	short int i = 1;
	float number1 = 0;
	
	for (;;)
	{
		if (i != 1) break;
		cout << "Enter the number: ";
		cin >> number1;
		
		cout << "Square of number: " << number1 * number1 << endl;
		cout << "Continue work? (1-yes 0-no)" << endl;
		cin >> i;
	}*/
	int max = 0;
	int min = 10000;
	int people = 0,
		average = 0;
	cout << "Enter the ammount of people: ";
	cin >> people;
	
	for(int i =1;i<=people;i++)
	{
		int age = 0;
		cout << "Enter the age of person" << i << ": ";
		cin >> age;
		if (age > max)
			max = age;
		if (age < min)
			min = age;
		average += age;
	}
	
	cout << "max: " << max << endl << endl;
	cout << "min: " << min << endl << endl;
	cout << "average: " << average / people << endl;

	return 0;
}