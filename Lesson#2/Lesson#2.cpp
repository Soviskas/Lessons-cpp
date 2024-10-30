//Объявить переменные с помощью которых можно будет посчитать 
// общую сумму покупки нескольких товаров. Например плитки шоколада, 
// кофе и пакеты молока.
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");
	int Chocolate = 40;
	int Milk = 30;
	int Coffee = 120;
	int inPackage = 0;

	cout << "Молоко стоит: " << Milk << endl;
	cout << "Плитка шоколада стоит: " << Chocolate << endl;
	cout << "Упаковка кофе стоит: " << Coffee << endl;

	inPackage = Milk + Chocolate + Coffee;

	cout << "Общая сумма покупки составляет: " << inPackage << endl;

	return 0;
}