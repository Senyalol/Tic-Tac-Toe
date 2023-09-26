#include "Tablo.h"
#include "Show.h"
#include "Step.h"
#include <iomanip>


int main() {
	//SetConsoleOutputCP(1251);
	//SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");

	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // Две команды для цвета текста в консоли
	//SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); // Две команды для цвета текста в консоли
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

														HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // Две команды для цвета текста в консоли
														SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); // Две команды для цвета текста в консоли
														cout << setw(48) << "Created by: Senyalol" << endl;
		cout << "\t" << endl;
		cout << "\t" << endl;
		cout << "\t" << endl;
		cout << "                                               " << "Сделайте выбор " << "\n";
		cout << "1 - Играть с ПК" << endl;
		cout << "2 - Игра 1 на 1" << endl;
		cout << "3 - Как играть?" << endl;
		cout << "4 - Выход из программы" << endl;

		cin >> choice;
		system("cls");

		switch (choice) {

		case 1: {
			ShowTablo(display);
			Intelect(display, x, y, x1, y1);
			break;
		}

		case 2: {
			cout << "Введите имя игрока 1" << endl;
			cin >> name;
			system("cls");

			cout << "Введите имя игрока 2" << endl;
			cin >> name1;
			system("cls");

			ShowTablo(display);
			StepPlayer(display, x, y, x1, y1, name, name1);
			break;
		}

		case 3:
		{
			string kok;
			cout << "Для того чтобы сделать ход, необходимо ввести две координаты: X и Y." << endl;
			cout << "Введите что-нибудь для продолжения" << endl;
			cin >> kok;
			kok = "0";
			system("cls");

			cout << "Само поле представляет собой квадрат, где x и y начинаются с 1." << endl;
			ShowTablo(display);
			cout << "Введите что-нибудь для продолжения" << endl;
			cin >> kok;
			kok = "0";
			system("cls");

			ShowTablo(display);
			cout << "Например, при вводе по X 2 и по Y 3 крестик будет поставлен на второй колонке внизу." << endl;
			cout << "Введите что-нибудь для продолжения" << endl;
			cin >> kok;
			kok = "0";
			system("cls");

			cout << "Выигрывает тот, кто собирает линию из 3 символов." << endl;
			cout << "Введите что-нибудь для продолжения" << endl;
			cin >> kok;
			kok = "0";
			system("cls");
			
			cout << "Теперь введите что-нибудь, чтобы закрыть правила и перезапустите игру" << endl;
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

