//�������� ���������� � ������� ������� ����� ����� ��������� 
// ����� ����� ������� ���������� �������. �������� ������ ��������, 
// ���� � ������ ������.
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");
	int Chocolate = 40;
	int Milk = 30;
	int Coffee = 120;
	int inPackage = 0;

	cout << "������ �����: " << Milk << endl;
	cout << "������ �������� �����: " << Chocolate << endl;
	cout << "�������� ���� �����: " << Coffee << endl;

	inPackage = Milk + Chocolate + Coffee;

	cout << "����� ����� ������� ����������: " << inPackage << endl;

	return 0;
}