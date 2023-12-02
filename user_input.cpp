#include <conio.h>

static int user_input()
{
	no_value_point: // Label for re-starting program in case of not getting DEFAULT: case in SWITCH()

	// User input common cases (capital keys are added for not checking whether)
	switch (_getch())
	{
	case 'w' | 'W':		// 'w' or 'W' | for moving  UP
		return -3;		//			  |
						//			  |
	case 's' | 'S':		// 's' or 'S' | for moving  DOWN
		return 3;		//			  |
						//			  |
	case 'a' | 'A':		// 'a' or 'A' | for moving  LEFT
		return -1;		//			  |
						//			  |
	case 'd' | 'D':		// 'd' or 'D' | for moving  RIGHT
		return 1;		//			  |
						//			  |
	case 32:			// ' '(SPACE) | for placing OBJECT 
		return 0;		
	default:			
		break;			
	}

	goto no_value_point;

}