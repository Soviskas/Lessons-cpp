#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	/*

	int variable1 = 0;
	int variable2 = 0;

	cout << "������� ������ �����: ";
	cin >> variable1;
	cout << "������� ������ �����: ";
	cin >> variable2;

	//���������� ��������� ��������
	//���� ������ ���� ������ ������� - ������� ���������
	//���� ��� ����� �� ���, ��� � �������� ������� �� ����������
	//� ��������� �������� � �������� ������� ������� if
	if (variable1 > variable2)
	{
		cout << "\n��������� ���������: ������ ����� ������ ��� ������\n";
	}

	//���� � ��� ������� �� ����������� - ������� � ���������� if
	if (variable1 < variable2)
	{
		cout << "\n��������� ���������: ������ ����� ������ ��� ������\n";
	}
	//��������� �������� �� ���������. �� ��������� �� ��������� ==
	//���� �������� variable1 = variable2, �� ��������
	//variable2 ��������� � ���������� variable1
	if (variable1 == variable2)
	{
		cout << "\n��������� ���������: ����� �����\n";
	} */

	/////////////////////////////////////////////////////////////////
	//���������� �������� ���������, ������� ��������� ������������ �� ������ ������� ���������. 
	// ������������ ��� ������ ��� ����� ����������� �����. ��������� ����� ������: ��������� ��������� ������� ����� �� ������.  
	// ������������ ������ ������ ����� � ������� �� ������ ��������� �� ������� ��� ���. 
	// ���� ���  � �������� ��� � ���������� ���������.

	int variable1 = 0;
	int variable2 = 0;
	int result = 0;

	cout << "�������� ������ ������� ���������" << endl<<endl;
	cout << "������� ������ �����: ";
	cin >> variable1;
	cout << "������� ������ �����: ";
	cin >> variable2;
	cout << "----------------------" << endl << endl;

	cout << "������� ��������� ��������� ���� �����: ";
	cin >> result;

	if(result == variable1*variable2)
	{
		cout << "Correct answer" << endl;
	}
	else {
		cout << "Answer is wrong" << endl;
		cout << "Correct answer is: " << variable1 * variable2 << endl;
	}
	return 0;
}
/*
��������� if:
��������� ����������� ������ if else

��������� if else:
��������� ����������� ������ if else

��� ���� ���������� ������ ������� :

��������� ����������� ������ if else

����������� ������ if else  � ����������.���� ��� ����������� � ����, �  ������ ��������� ����������� �����.�������� :
��������� ����������� ������ if else

������� ������ ��������� ������ if  � ���� ������� � ������� ������� ������(true), �� ��� ����� ����������.���� ����(false) � ������������ � ���������� ��������� ���������� �� ������ ����, ��������� ��� ������ if.


������� ��������� ������   �   �������   �������   �����   ���� ������� : if (variable > 0)  ��� ��������������� : if (variable > 0 && variable < 100).��������������� ������� ������ true, ���� ��� ������� ����� �������.


	������� ��������� ������ ����� ���� �������������� ���������� : if (variable1 � variable2).��� ����� if  ����������, ���� ��������� ���������� �� ����� ����� 0. �������� : if (5 � 7), if (2 + 5).� ��� ���� if (2 - 2) � ��� ����� ����� ��������������.


	���� ����� if, else if ��� else  �������� ������ ���� ������ ����, �������� ������ ����� �� ������������.�� ��� ��������, ���� �� �������, ���������� ������������ �������� ������ ������*/