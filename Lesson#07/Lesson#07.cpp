#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//��������� ���������

	cout << (3 > 8)<<endl;// �������� ����� ������ ��� ������?(�� ������ 0(false))
	cout << (3 < 8)<<endl;// �������� ����� ������ ��� ������(�� ������ 1(true))
	cout << (3 >= 8)<<endl;// �������� ����� ������ ��� ����� �������� ������(�� ������ 0(false))
	cout << (3 <= 8)<<endl;//�������� ����� ������ ��� ����� �������� ������(�� ������ 1(true))

	//�������� ���������

	cout << (3 == 8)<<endl;//�������� ����� ����� �������� ������(�� ������ 0(false))
	cout << (3 != 8)<<endl;//�������� ����� �� ����� �������� ������(�� ������ 1(true))

	//������������� �������� � ���������� �������� �����������
	//! -- ��
	//&& -- � 
	//|| -- ���

	int variable1 = 15;
	int variable2 = 3;
	int variable3 = 8;

	cout << "variable1= " << variable1 << endl;
	cout << "variable2= " << variable2 << endl;
	cout << "variable3= " << variable3 << endl;

	//��������� ��������� � ��������� ���������
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

	//������������� ��������
	cout << "!(variable2 < variable3) : ";
	cout << !(variable2 < variable3) << endl;

	//���������� ��������� �����������
	cout << "((variable1 > 10) && (variable1 < 20)): ";
	cout << ((variable1 > 10) && (variable1 < 20)) << endl;

	cout << "((variable1 < 10) || (variable1 > 20)): ";
	cout << ((variable1 < 10) || (variable1 > 20)) << endl;

	cout << endl << "1 - true, 0 - false" << endl << endl;

	return 0;
}