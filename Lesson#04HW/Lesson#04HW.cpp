#include <iostream>
#include<string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    // ������� 1

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
    // � ���������� ���� bool  � ������� cin ����� ������ 
    // ������ ����� 0 (���������������� ��� false) � 1 (true)
    
    cout << "value of \'digit\'= "<< digit <<endl;
    cout << "value of \'digit2\'= "<< digit2 <<endl;
    cout << "value of \'symbol\'= "<< symbol <<endl;
    cout << "value of \'bool\'= "<< trueOrFalse <<endl;
    */

    //������� 2

    /*
    char litera1 = 0;
    char litera2 = 0;
    char litera3 = 0;
    char litera4 = 0;
    char litera5 = 0;

    cout << "�������� ����� �� 5 ����" << endl;
    cout << "---------------------------" << endl;
    cout << "������� ������ �����: ";
    cin >> litera1;
    cout << "������� ������ �����: ";
    cin >> litera2;
    cout << "������� ������ �����: ";
    cin >> litera3;
    cout << "������� ��������� �����: ";
    cin >> litera4;
    cout << "������� ����� �����: ";
    cin >> litera5;

    cout << "���������� �����: " << litera1 << litera2 << litera3 << litera4 << litera5 << endl;
    cout << "--------------------------------------";
    */

    //������� 3
    /*
    cout << "� ������ � ��������� �� �� �������� ��,\n��� �������� ���, � ������ �������� ��, ��� ������� �?\n� ��� �������� ���� � ���� �� �������. � �� ������:\n \"������ ���� �� �� �����\". ��� �������:\"�����?\n� ������ �����������\". � ������� ��������.\n\t\/\/�.�.\"� ��� ������� �������\"\/\/ ";
    */

    //������� 4

    float variable1 = 0;
    float variable2 = 0;
    int variant = 0;
    bool znachennya = true;

    cout << "������� �������� ��������� 1 � 2: ";
    cin >> variable1 >> variable2;

    cout << "�������� �������� ������ ������ �������� ��� �����������\n1-������������\n2-�����\n3-�������";
    
    do {
        cin >> variant;
        switch (variant) {
        case(1):
            cout << "������������: " << variable1 * variable2 << endl;
            cout << "������� ��������������: " << (variable1 + variable2) / 2 << endl;
            break;
        case(2):
            cout << "�����: " << variable1 + variable2 << endl;
            cout << "������� ��������������: " << (variable1 + variable2) / 2 << endl;
            break;
        case(3):
            cout << "�������: " << variable1 - variable2 << endl;
            cout << "������� ��������������: " << (variable1 + variable2) / 2 << endl;
            break;
        default:
            cout << "�������� ���� �������� " << variant << "�� ����������!" << endl;
            cout << "�������� �������� (�� 1 �� 3)" << endl;
        }
        if (variant >= 1 && variant <= 3)
            znachennya = false;
    } while (znachennya);
    return 0;
}

