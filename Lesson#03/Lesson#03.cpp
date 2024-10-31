#include<iostream>
using namespace std;

/*int main()
{
	setlocale(LC_ALL, "ru");
	int answer = 0;// Будет хранить выбор пользователя
	bool var = true;// Управляющая переманная циклом (do while)
	cout << "Введите номер станции для расчета времени в пути (от 1 до 5): " << endl;
	cout << "----------------------------------------------------------------" << endl << endl;
	cout << "1 - Trinitat Nova" << endl;
	cout << "2 - Casa de L`Aigua" << endl;
	cout << "3 - Torre Baro Vallbona" << endl;
	cout << "4 - Ciutat Meridiana" << endl;
	cout << "5 - Can Cuias" << endl;
	do {
		cin >> answer;// Ввод значения

		switch (answer)// switch принимает переменную answer и ищет подходящий case
		{
		case 1: // Если answer равно 1, на экран выйдут сообщения этого case
			cout << "Станция метро: Trinitat Nova " << endl;
			cout << "Время в пути - 15 мин." << endl;
			cout<<"Приятной поездки =)"<<endl;
			cout << "-------------------------------" << endl;
			break;// выход из switch. иначе будет переход case(2)  и т.д.
		case 2: // Если answer равно 2 
			cout << "Станция метро: Casa de L`Aigua " << endl;
			cout << "Время в пути - 19 мин." << endl;
			cout << "Приятной поездки =)" << endl;
			cout << "-------------------------------" << endl;
			break;
		case 3:
			cout << "Станция метро: Torre Baro Vallbona " << endl;
			cout << "Время в пути - 15 мин." << endl;
			cout<<"Приятной поездки =)"<<endl;
			cout << "-------------------------------" << endl;
			break;
		case 4:
			cout << "Станция метро: Ciutat Meridiana " << endl;
			cout << "Время в пути - 15 мин." << endl;
			cout<<"Приятной поездки =)"<<endl;
			cout << "-------------------------------" << endl;
			break;
		case 5:
			cout << "Станция метро: Can Cuias " << endl;
			cout << "Время в пути - 15 мин." << endl;
			cout<<"Приятной поездки =)"<<endl;
			cout << "-------------------------------" << endl;
			break;
		default:// если ни один case не сработал, сработает default
			cout << "Станции под номером: " << answer << " нет!" << endl;
			cout << "Сделайте праильный выбор (от 1 до 5): " << endl;
			cout << "------------------------------------------" << endl;
		}
		// если введено правильное значение (от 1 до 5)
		// default не сработает и выполнится блок if
		// переменная var примет значение false
		// и цикл do while не повторится
		if (answer >= 1 && answer <= 5)
			var = false;
	} while (var); //цикл повторится, пока var не изменит значение на false

	return 0;
}*/
int main()
{
	setlocale(LC_ALL, "ru");
	int day_of_week = 0;
	bool work = true;
	cout << "Выберите день недели (от 1 до 7): " << endl;
	do {
		cin >> day_of_week;
		switch (day_of_week)
		{
		case 1:
			cout << "Понедельник: " << endl << "ОБД" << endl << "Английски язык" << endl << "Дискретная математика" << endl;
			cout << "-----------------" << endl;
			break;
		case 2:
			cout << "Вторник: " << endl << "ОБД" << endl << "Анализ требований" << endl << "Дискретная математика" << endl;
			cout << "-----------------" << endl;
			break;
		case 3:
			cout << "Среда: " << endl << "Алогиртмы и структуры данных" << endl << "Анализ требований" << endl << "Теория вероятности" << endl;
			cout << "-----------------" << endl;
			break;
		case 4:
			cout << "Четверг: " << endl << "ООП" << endl << "Физкультура" << endl << "Веб-программирование" << endl;
			cout << "-----------------" << endl;
			break;
		case 5:
			cout << "Пятница: " << endl << "Теория вероятности" << endl << "ООП" << endl;
			cout << "-----------------" << endl;
			break;
		case 6:
			cout << "Суббота: " << endl << "Отдых" << endl;
			cout << "-----------------" << endl;
			break;
		case 7:
			cout << "Воскресенье: " << endl << "Отдых" << endl << "Подготовка к рабочей неделе" << endl;
			cout << "-----------------" << endl;
			break;
		default:
			cout << "Число " << day_of_week << "не правильное!" << endl;
			cout << "Введите предложеное число(от 1 до 7)" << endl;
			cout << "------------------------------------" << endl;
		}
		if (day_of_week >= 1 && day_of_week <= 7)
			work = false;
	} while (work);
	return 0;

}