#include <cstdlib>

static void cons_color(char font_color, char background_color)
{
	char command[8] = "Color ";
	command[6] = font_color;
	command[7] = background_color;

	system(command);

	return;
}