#include<iostream>
using namespace std;

/*int main()
{
	setlocale(LC_ALL, "ru");
	int answer = 0;// ����� ������� ����� ������������
	bool var = true;// ����������� ���������� ������ (do while)
	cout << "������� ����� ������� ��� ������� ������� � ���� (�� 1 �� 5): " << endl;
	cout << "----------------------------------------------------------------" << endl << endl;
	cout << "1 - Trinitat Nova" << endl;
	cout << "2 - Casa de L`Aigua" << endl;
	cout << "3 - Torre Baro Vallbona" << endl;
	cout << "4 - Ciutat Meridiana" << endl;
	cout << "5 - Can Cuias" << endl;
	do {
		cin >> answer;// ���� ��������

		switch (answer)// switch ��������� ���������� answer � ���� ���������� case
		{
		case 1: // ���� answer ����� 1, �� ����� ������ ��������� ����� case
			cout << "������� �����: Trinitat Nova " << endl;
			cout << "����� � ���� - 15 ���." << endl;
			cout<<"�������� ������� =)"<<endl;
			cout << "-------------------------------" << endl;
			break;// ����� �� switch. ����� ����� ������� case(2)  � �.�.
		case 2: // ���� answer ����� 2 
			cout << "������� �����: Casa de L`Aigua " << endl;
			cout << "����� � ���� - 19 ���." << endl;
			cout << "�������� ������� =)" << endl;
			cout << "-------------------------------" << endl;
			break;
		case 3:
			cout << "������� �����: Torre Baro Vallbona " << endl;
			cout << "����� � ���� - 15 ���." << endl;
			cout<<"�������� ������� =)"<<endl;
			cout << "-------------------------------" << endl;
			break;
		case 4:
			cout << "������� �����: Ciutat Meridiana " << endl;
			cout << "����� � ���� - 15 ���." << endl;
			cout<<"�������� ������� =)"<<endl;
			cout << "-------------------------------" << endl;
			break;
		case 5:
			cout << "������� �����: Can Cuias " << endl;
			cout << "����� � ���� - 15 ���." << endl;
			cout<<"�������� ������� =)"<<endl;
			cout << "-------------------------------" << endl;
			break;
		default:// ���� �� ���� case �� ��������, ��������� default
			cout << "������� ��� �������: " << answer << " ���!" << endl;
			cout << "�������� ��������� ����� (�� 1 �� 5): " << endl;
			cout << "------------------------------------------" << endl;
		}
		// ���� ������� ���������� �������� (�� 1 �� 5)
		// default �� ��������� � ���������� ���� if
		// ���������� var ������ �������� false
		// � ���� do while �� ����������
		if (answer >= 1 && answer <= 5)
			var = false;
	} while (var); //���� ����������, ���� var �� ������� �������� �� false

	return 0;
}*/
int main()
{
	setlocale(LC_ALL, "ru");
	int day_of_week = 0;
	bool work = true;
	cout << "�������� ���� ������ (�� 1 �� 7): " << endl;
	do {
		cin >> day_of_week;
		switch (day_of_week)
		{
		case 1:
			cout << "�����������: " << endl << "���" << endl << "��������� ����" << endl << "���������� ����������" << endl;
			cout << "-----------------" << endl;
			break;
		case 2:
			cout << "�������: " << endl << "���" << endl << "������ ����������" << endl << "���������� ����������" << endl;
			cout << "-----------------" << endl;
			break;
		case 3:
			cout << "�����: " << endl << "��������� � ��������� ������" << endl << "������ ����������" << endl << "������ �����������" << endl;
			cout << "-----------------" << endl;
			break;
		case 4:
			cout << "�������: " << endl << "���" << endl << "�����������" << endl << "���-����������������" << endl;
			cout << "-----------------" << endl;
			break;
		case 5:
			cout << "�������: " << endl << "������ �����������" << endl << "���" << endl;
			cout << "-----------------" << endl;
			break;
		case 6:
			cout << "�������: " << endl << "�����" << endl;
			cout << "-----------------" << endl;
			break;
		case 7:
			cout << "�����������: " << endl << "�����" << endl << "���������� � ������� ������" << endl;
			cout << "-----------------" << endl;
			break;
		default:
			cout << "����� " << day_of_week << "�� ����������!" << endl;
			cout << "������� ����������� �����(�� 1 �� 7)" << endl;
			cout << "------------------------------------" << endl;
		}
		if (day_of_week >= 1 && day_of_week <= 7)
			work = false;
	} while (work);
	return 0;

}