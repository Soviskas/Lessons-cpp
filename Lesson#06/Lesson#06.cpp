#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int variable = 0;

	// Postfiks form

		cout << variable << endl;
	variable = variable + 1;//������� ������
		cout << variable << " - variable = variable + 1" << endl;
	variable += 1;//��������������� �������� +=
		cout << variable << " - variable += 1" << endl;
	variable++;//���������� ��������� ++
		cout << variable << " - variable++" << endl;
	variable--;//���������� ��������� --
	variable--;
	variable--;
		cout << variable << " - ��� ���� variable--" << endl;
		cout << "-------------------------------------" << endl;

		

		// ����������� ���������
		// �������� variable ���������� �� 1 ����� ������ �� �����
		cout << variable++ << " - ��������� \"cout << variable++\" " << endl;
		cout << variable << "- ��������� ��������" << endl;
		// ���������� ���������
		// ����� ���������� �� 1, ����� ����� �� �����
		cout << ++variable << " - ��������� \"cout << ++variable\" " << endl;

		// �� �� ������ ��� ����������
		// ����������� ���������
		cout << variable-- << " - ��������� \"cout << variable--\" " << endl;
		cout << variable << " - ��������� ��������" << endl;
		// ���������� ���������
		cout << --variable << " - ��������� \"cout << --variable\" " << endl;

	return 0;
}