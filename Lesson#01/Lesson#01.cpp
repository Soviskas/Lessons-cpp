cd C\My\CPP project\Lesson#01
git init
git add .
git commit - m "Initial commit"
git remote add origin https ://github.com/Soviskas/Lessons-cpp.git
git push - u origin master

//������: ���� 2 �����. � ����� 11 �����, �� ������ 44
//������� ����������, ������� ����� ������� ���������� �����
// � ���� ����������, � ������� ���� �������� ����� ���������� �����

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//�������� ���������� � �������������
	int amount_of_apples1 = 11;
	int amount_of_apples2 = 44;

	int inBox = 0;//��� ������ ������ ����������

	cout << "� ������ �������: " << inBox << endl;
	//����� ������ �� �����
	cout << "� ������ �����: " << amount_of_apples1 << endl;
	cout << "�� ������ �����: " << amount_of_apples2 << endl;
	cout << endl;//��� ���� ������� �� ����� ������

	//������� ������ ���������� ����� � �������
	inBox = amount_of_apples1 + amount_of_apples2;

	//����� ������ ���������� �� �����
	cout << "����� � ������� ���������: " << inBox << " �����" << endl;

	return 0;
}