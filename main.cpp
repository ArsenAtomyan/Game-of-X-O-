#include <iostream>
#include <string>
#include <conio.h>

#include "face.cpp"
//#include "controls.cpp"
#include "console.cpp"
//#include "controls.cpp"


int main()
{
	// Playground array
	const int gap_size = 9;
	char gap[gap_size] = { 176 , 176 , 176 , 176 , 176 , 176 , 176 , 176 , 176 };
	char* gap_ptr = gap;

	// Value of selected gap
	int current_place = 0;

	int score_X = 0;
	int score_O = 0;

	screen_refresh();



	system("pause");

	return 0;
}

