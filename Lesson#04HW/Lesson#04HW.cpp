#include <iostream>
#include<string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    // Задание 1

    /*
    int digit = 0;
    float digit2 = 0;
    char symbol = 0;
    bool trueOrFalse = 0;
    
    cout << "Enter the value of variables(a, b, c, d)" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Enter the digit: ";
    cin >> digit;
    cout << "Enter the digit.2: ";
    cin >> digit2;
    cout << "Enter the symbol: ";
    cin >> symbol;
    cout << "Enter 0 or 1: ";
    cin >> trueOrFalse;
    // в переменную типа bool  с помощью cin можно ввести 
    // только числа 0 (интерпретируется как false) и 1 (true)
    
    cout << "value of \'digit\'= "<< digit <<endl;
    cout << "value of \'digit2\'= "<< digit2 <<endl;
    cout << "value of \'symbol\'= "<< symbol <<endl;
    cout << "value of \'bool\'= "<< trueOrFalse <<endl;
    */

    //Задание 2

    /*
    char litera1 = 0;
    char litera2 = 0;
    char litera3 = 0;
    char litera4 = 0;
    char litera5 = 0;

    cout << "Напишите слово из 5 букв" << endl;
    cout << "---------------------------" << endl;
    cout << "Введите первую букву: ";
    cin >> litera1;
    cout << "Введите вторую букву: ";
    cin >> litera2;
    cout << "Введите третью букву: ";
    cin >> litera3;
    cout << "Введите четвертую букву: ";
    cin >> litera4;
    cout << "Введите пятую букву: ";
    cin >> litera5;

    cout << "Получилось слово: " << litera1 << litera2 << litera3 << litera4 << litera5 << endl;
    cout << "--------------------------------------";
    */

    //Задание 3
    /*
    cout << "А почему в ресторане ей не нравится то,\nчто заказала она, и всегда нравится то, что заказал я?\nИ она начинает есть у меня из тарелки. Я ей говорю:\n \"Закажи себе то же самое\". Она говорит:\"Зачем?\nЯ только попробовать\". И сьедает половину.\n\t\/\/к.ф.\"О чём говорят мужчины\"\/\/ ";
    */

    //Задание 4

    float variable1 = 0;
    float variable2 = 0;
    int variant = 0;
    bool znachennya = true;

    cout << "Введите значение перменных 1 и 2: ";
    cin >> variable1 >> variable2;

    cout << "Выберите действие которе хотите провести над переменными\n1-произведение\n2-сумма\n3-разница";
    
    do {
        cin >> variant;
        switch (variant) {
        case(1):
            cout << "Произведение: " << variable1 * variable2 << endl;
            cout << "Среднее арифмитическое: " << (variable1 + variable2) / 2 << endl;
            break;
        case(2):
            cout << "Сумма: " << variable1 + variable2 << endl;
            cout << "Среднее арифмитическое: " << (variable1 + variable2) / 2 << endl;
            break;
        case(3):
            cout << "Разница: " << variable1 - variable2 << endl;
            cout << "Среднее арифмитическое: " << (variable1 + variable2) / 2 << endl;
            break;
        default:
            cout << "Выбраное вами действие " << variant << "не существует!" << endl;
            cout << "Выберите действие (от 1 до 3)" << endl;
        }
        if (variant >= 1 && variant <= 3)
            znachennya = false;
    } while (znachennya);
    return 0;
}

