#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int variable = 0;

	// Postfiks form

		cout << variable << endl;
	variable = variable + 1;//обычный способ
		cout << variable << " - variable = variable + 1" << endl;
	variable += 1;//комбинированный оператор +=
		cout << variable << " - variable += 1" << endl;
	variable++;//используем инкримент ++
		cout << variable << " - variable++" << endl;
	variable--;//используем декремент --
	variable--;
	variable--;
		cout << variable << " - три раза variable--" << endl;
		cout << "-------------------------------------" << endl;

		

		// постфиксный инкремент
		// значение variable увеличится на 1 после показа на экран
		cout << variable++ << " - результат \"cout << variable++\" " << endl;
		cout << variable << "- изменённое значение" << endl;
		// префиксный инкремент
		// сразу увеличение на 1, потом показ на экран
		cout << ++variable << " - результат \"cout << ++variable\" " << endl;

		// та же логика для декремента
		// постфиксный декремент
		cout << variable-- << " - результат \"cout << variable--\" " << endl;
		cout << variable << " - изменённое значение" << endl;
		// префиксный декремент
		cout << --variable << " - результат \"cout << --variable\" " << endl;

	return 0;
}