#include "Tablo.h"
#include "Show.h"
#include "Step.h"
#include <iomanip>


int main() {
	//SetConsoleOutputCP(1251);
	//SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");

	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // ��� ������� ��� ����� ������ � �������
	//SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); // ��� ������� ��� ����� ������ � �������
	//cout << setw(14) << "Created by" << endl;


	int choice;
	string name, name1;


	char display[5][5] = {" "};
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			display[i][j] = ' ';
		}
	}

    int x=0, y=0,x1=0,y1=0;

	Tablo(display);

														HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // ��� ������� ��� ����� ������ � �������
														SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); // ��� ������� ��� ����� ������ � �������
														cout << setw(48) << "Created by: Senyalol" << endl;
		cout << "\t" << endl;
		cout << "\t" << endl;
		cout << "\t" << endl;
		cout << "                                               " << "�������� ����� " << "\n";
		cout << "1 - ������ � ��" << endl;
		cout << "2 - ���� 1 �� 1" << endl;
		cout << "3 - ��� ������?" << endl;
		cout << "4 - ����� �� ���������" << endl;

		cin >> choice;
		system("cls");

		switch (choice) {

		case 1: {
			ShowTablo(display);
			Intelect(display, x, y, x1, y1);
			break;
		}

		case 2: {
			cout << "������� ��� ������ 1" << endl;
			cin >> name;
			system("cls");

			cout << "������� ��� ������ 2" << endl;
			cin >> name1;
			system("cls");

			ShowTablo(display);
			StepPlayer(display, x, y, x1, y1, name, name1);
			break;
		}

		case 3:
		{
			string kok;
			cout << "��� ���� ����� ������� ���, ���������� ������ ��� ����������: X � Y." << endl;
			cout << "������� ���-������ ��� �����������" << endl;
			cin >> kok;
			kok = "0";
			system("cls");

			cout << "���� ���� ������������ ����� �������, ��� x � y ���������� � 1." << endl;
			ShowTablo(display);
			cout << "������� ���-������ ��� �����������" << endl;
			cin >> kok;
			kok = "0";
			system("cls");

			ShowTablo(display);
			cout << "��������, ��� ����� �� X 2 � �� Y 3 ������� ����� ��������� �� ������ ������� �����." << endl;
			cout << "������� ���-������ ��� �����������" << endl;
			cin >> kok;
			kok = "0";
			system("cls");

			cout << "���������� ���, ��� �������� ����� �� 3 ��������." << endl;
			cout << "������� ���-������ ��� �����������" << endl;
			cin >> kok;
			kok = "0";
			system("cls");
			
			cout << "������ ������� ���-������, ����� ������� ������� � ������������� ����" << endl;
			cin >> kok;
			kok = "0";
			system("cls");
			return 0;
			



			break;
		}

		case 4:{
			return 0;
			break;
		       }
		

		


	}

	
}

