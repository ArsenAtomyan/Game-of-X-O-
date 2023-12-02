#include "cons_color.cpp"
#include "cons_size.cpp"

static void console()
{
	// Console size
	const int width  = 13; // Columns
	const int height = 9 ; // Lines

	// Console color
	const char font_color  = 'A';   // Font color
	const char background_color = '0';   // Background color

	//	1	Blue	9	Light Blue
	//	2	Green	0	Black
	//	3	Aqua	A	Light Green
	//	4	Red		B	Light Aqua
	//  5	Purple	C	Light Red
	//	6	Yellow	D	Light Purple
	//	7	White	E	Light Yellow
	//	8	Gray	F	Bright White

	// Console size setup
	cons_size(width, height);
	// Console color setup
	cons_color(font_color, background_color);

	return;
}
