#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//Операторы сравнения

	cout << (3 > 8)<<endl;// Значение слева больше чем справа?(на экране 0(false))
	cout << (3 < 8)<<endl;// Значение слева меньше чем справа(на экране 1(true))
	cout << (3 >= 8)<<endl;// Значение слева больше или равно значению справа(на экране 0(false))
	cout << (3 <= 8)<<endl;//Значение слева меньше или равно значению справа(на экране 1(true))

	//Оператры равенства

	cout << (3 == 8)<<endl;//Значение слева равно значению справа(на экране 0(false))
	cout << (3 != 8)<<endl;//Значение слева не равно значению справа(на экране 1(true))

	//Отрицательная инверсия и логические операции объединения
	//! -- НЕ
	//&& -- И 
	//|| -- ИЛИ

	int variable1 = 15;
	int variable2 = 3;
	int variable3 = 8;

	cout << "variable1= " << variable1 << endl;
	cout << "variable2= " << variable2 << endl;
	cout << "variable3= " << variable3 << endl;

	//операторы сравнения и операторы равенства
	cout << "(variable2 > variable3) : ";
	cout << (variable2 > variable3) << endl;

	cout << "(variable2 < variable3) : ";
	cout << (variable2 < variable3) << endl;

	cout << "(variable2 >= variable3) : ";
	cout << (variable2 >= variable3) << endl;

	cout << "(variable2 <= variable3) : ";
	cout << (variable2 <= variable3) << endl;

	cout << "(variable2 == variable3) : ";
	cout << (variable2 == variable3) << endl;

	cout << "(variable2 != variable3) : ";
	cout << (variable2 != variable3) << endl;

	//отрицательная инверсия
	cout << "!(variable2 < variable3) : ";
	cout << !(variable2 < variable3) << endl;

	//логические операторы объединения
	cout << "((variable1 > 10) && (variable1 < 20)): ";
	cout << ((variable1 > 10) && (variable1 < 20)) << endl;

	cout << "((variable1 < 10) || (variable1 > 20)): ";
	cout << ((variable1 < 10) || (variable1 > 20)) << endl;

	cout << endl << "1 - true, 0 - false" << endl << endl;

	return 0;
}