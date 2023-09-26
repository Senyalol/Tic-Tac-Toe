#include "Tablo.h"

void Tablo(char display[5][5]) {
	for (int i = 0; i < 5; i++)
	{
		display[i][0] = '|';
		display[i][4] = '|';
		for (int j = 0; j < 5; j++) {
			display[0][j] = '-';
			display[4][j] = '-';
		}

	}
}