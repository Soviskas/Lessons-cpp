cd C\My\CPP project\Lesson#01
git init
git add .
git commit - m "Initial commit"
git remote add origin https ://github.com/Soviskas/Lessons-cpp.git
git push - u origin master

//Задача: Есть 2 сумки. В одной 11 яблок, во второй 44
//Создать переменные, которые будут хранить количество яблок
// и одну переменную, в которую надо записать общее количество яблок

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//создание переменных и инициализация
	int amount_of_apples1 = 11;
	int amount_of_apples2 = 44;

	int inBox = 0;//для записи общего количества

	cout << "В пустой коробке: " << inBox << endl;
	//вывод двнных на экран
	cout << "В первой сумке: " << amount_of_apples1 << endl;
	cout << "Во второй сумке: " << amount_of_apples2 << endl;
	cout << endl;//еще один перевод нв новую строку

	//подсчёт общего количества яблок в коробке
	inBox = amount_of_apples1 + amount_of_apples2;

	//показ общего количества на екран
	cout << "Всего в коробку добавлено: " << inBox << " яблок" << endl;

	return 0;
}