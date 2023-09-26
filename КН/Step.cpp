#include "Tablo.h"
#include "Show.h"
#include "Step.h"

void StepPlayer(char display[5][5], int x, int y, int x1, int y1,string name,string name1) {
	while (true) {


		cout << "Ход " << name << endl;

		cout << "Input x:" << endl;
		cin >> x;

		cout << "Input y:" << endl;
		cin >> y;

	//	if (!isdigit(x) and !isdigit(y)) {
			if (x > 0 and x < 4 and y > 0 and y < 4) {
				//Наш ход
				for (int i = 1; i <= 3; i++)
				{

					for (int j = 1; j <= 3; j++)
					{

						if (display[y][x] == display[i][j]) {
							if (x > 0 and x < 4 and y > 0 and y < 4) {
								display[y][x] = 'x';
							}



						}
						// ход противника






						if (display[1][1] == 'x' and display[1][2] == 'x' and display[1][3] == 'x') {
							cout << name << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}  // вертикаль

						if (display[1][1] == 'x' and display[2][1] == 'x' and display[3][1] == 'x') {
							cout << name << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[3][1] == 'x' and display[3][2] == 'x' and display[3][3] == 'x') {
							cout << name << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[1][2] == 'x' and display[2][2] == 'x' and display[3][2] == 'x') {
							cout << name << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[2][1] == 'x' and display[2][2] == 'x' and display[2][3] == 'x') {
							cout << name << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[1][3] == 'x' and display[2][3] == 'x' and display[3][3] == 'x') {
							cout << name << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[3][1] == 'x' and display[2][2] == 'x' and display[1][3] == 'x') {
							cout << name << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[1][1] == 'x' and display[2][2] == 'x' and display[3][3] == 'x') {
							cout << name << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						

					}
				}
				system("cls");
			}


			else if (x < 0 or x > 4 or y < 0 or y > 4) {

				system("cls");
				cout << name << " Пропускает ход из-за неправильного ввода" << endl;

			}
		//}

//h
		else {
			cout << name << " Пропускает ход из-за неправильного ввода" << endl;
		}
		// lox


		ShowTablo(display);


		cout << "Ход " << name1 << endl;

		cout << "Input x:" << endl;
		cin >> x1;

		cout << "Input y:" << endl;
		cin >> y1;

	//	if (!isdigit(x1) and !isdigit(y1)){
			if (x1 > 0 and x1 < 4 and y1 > 0 and y1 < 4) {
				for (int i = 1; i <= 3; i++) {
					for (int j = 1; j <= 3; j++) {

						if (display[y1][x1] == display[i][j]) {
							if (x1 > 0 and x1 < 4 and y1 > 0 and y1 < 4) {
								display[y1][x1] = 'o';
							}
						}

						// условие выигрыша соперника
						if (display[1][1] == 'o' and display[1][2] == 'o' and display[1][3] == 'o') {
							cout << name1 << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}  // вертикаль

						if (display[1][1] == 'o' and display[2][2] == 'o' and display[3][3] == 'o') {
							cout << name1 << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[3][1] == 'o' and display[2][2] == 'o' and display[1][3] == 'o') {
							cout << name1 << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}


						if (display[1][1] == 'o' and display[2][1] == 'o' and display[3][1] == 'o') {
							cout << name1 << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[3][1] == 'o' and display[3][2] == 'o' and display[3][3] == 'o') {
							cout << name1 << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[1][2] == 'o' and display[2][2] == 'o' and display[3][2] == 'o') {
							cout << name1 << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[2][1] == 'o' and display[2][2] == 'o' and display[2][3] == 'o') {
							cout << name1 << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}

						if (display[1][3] == 'o' and display[2][3] == 'o' and display[3][3] == 'o') {
							cout << name1 << " Выиграл игру" << endl;
							ShowTablo(display);
							exit(1);
						}


					

					}

				}
				system("cls");
			}

			else if (x1 < 0 or x1 > 4 or y1 < 0 or y1 > 4) {
				system("cls");
				cout << name << " Пропускает ход из-за неправильного ввода" << endl;
			}
	//}
	//h	
		else {
			cout << name1 << " Пропускает ход из-за неправильного хода " << endl;
		}

		ShowTablo(display);

	}
}


void Intelect(char display[5][5], int x, int y, int x1, int y1) {
	srand(time(NULL));
	while (true) {

		cout << "Your move" << endl;

		cout << "Input x:" << endl;
		cin >> x;

		cout << "Input y:" << endl;
		cin >> y;

		//Наш ход
		for (int i = 1; i <= 3; i++)
		{

			for (int j = 1; j <= 3; j++)
			{

				if (display[y][x] == display[i][j]) {
					if (x > 0 and x < 4 and y > 0 and y < 4) {

						if (display[y1][x1] != display[y][x]) {
							display[y][x] = 'x';
						}

						else {
							cout << "Данное поле занято" << endl;

							cout << "Your move" << endl;

							cout << "Input x:" << endl;
							cin >> x;

							cout << "Input y:" << endl;
							cin >> y;

						}

					}
				}
				// ход противника






				if (display[1][1] == 'x' and display[1][2] == 'x' and display[1][3] == 'x') {
					cout << "You are win" << endl;
					exit(1);
				}  // вертикаль

				if (display[1][1] == 'x' and display[2][1] == 'x' and display[3][1] == 'x') {
					cout << "You are win" << endl;
					exit(1);
				}

				if (display[3][1] == 'x' and display[3][2] == 'x' and display[3][3] == 'x') {
					cout << "You are win" << endl;
					exit(1);
				}

				if (display[1][2] == 'x' and display[2][2] == 'x' and display[3][2] == 'x') {
					cout << "You are win" << endl;
					exit(1);
				}

				if (display[2][1] == 'x' and display[2][2] == 'x' and display[2][3] == 'x') {
					cout << "You are win" << endl;
					exit(1);
				}

				if (display[1][3] == 'x' and display[2][3] == 'x' and display[3][3] == 'x') {
					cout << "You are win" << endl;
					exit(1);
				}

				if (display[3][1] == 'x' and display[2][2] == 'x' and display[1][3] == 'x') {
					cout << "You are win" << endl;
					exit(1);
				}

				if (display[1][1] == 'x' and display[2][2] == 'x' and display[3][3] == 'x') {
					cout << "You are win" << endl;
					exit(1);
				}


			}
		}

		x1 = rand() % 3 + 1;

		y1 = rand() % 3 + 1;

		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= 3; j++) {

				if (display[y1][x1] == display[i][j]) {
					if (x1 > 0 and x1 < 4 and y1 > 0 and y1 < 4) {

						if (display[y1][x1] != display[y][x]) {
						display[y1][x1] = 'o';
						}

						else {
							x1 = rand() % 3 + 1;

							y1 = rand() % 3 + 1;

							display[y1][x1] == 'o';
						}


					}
				}







				// условие выигрыша соперника
				if (display[1][1] == 'o' and display[1][2] == 'o' and display[1][3] == 'o') {
					cout << "enemy win" << endl;
					exit(1);
				}  // вертикаль

				if (display[1][1] == 'o' and display[2][2] == 'o' and display[3][3] == 'o') {
					cout << "enemy win" << endl;
					exit(1);
				}

				if (display[3][1] == 'o' and display[2][2] == 'o' and display[1][3] == 'o') {
					cout << "enemy win" << endl;
					exit(1);
				}


				if (display[1][1] == 'o' and display[2][1] == 'o' and display[3][1] == 'o') {
					cout << "enemy win" << endl;
					exit(1);
				}

				if (display[3][1] == 'o' and display[3][2] == 'o' and display[3][3] == 'o') {
					cout << "You are win" << endl;
					exit(1);
				}

				if (display[1][2] == 'o' and display[2][2] == 'o' and display[3][2] == 'o') {
					cout << "enemy win" << endl;
					exit(1);
				}

				if (display[2][1] == 'o' and display[2][2] == 'o' and display[2][3] == 'o') {
					cout << "enemy win" << endl;
					exit(1);
				}

				if (display[1][3] == 'o' and display[2][3] == 'o' and display[3][3] == 'o') {
					cout << "enemy win" << endl;
					exit(1);
				}

				

			}
		}
		ShowTablo(display);
	}
}

