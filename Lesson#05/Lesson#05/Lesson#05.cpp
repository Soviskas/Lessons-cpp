#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int mainNuber = 6789;

	cout << "Original number: " << mainNuber << endl;
	cout << "Reworking number: ";
	cout << mainNuber % 10;
	mainNuber /= 10;
	cout << mainNuber % 10;
	mainNuber /= 10;
	cout << mainNuber % 10;
	mainNuber /= 10;
	cout << mainNuber % 10;
	mainNuber /= 10;

	cout << endl << endl;

	return 0;
}