#include "Tablo.h"
#include "Show.h"


void ShowTablo(char display[5][5]) {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << display[i][j];
		}
		cout << endl;
	}
}