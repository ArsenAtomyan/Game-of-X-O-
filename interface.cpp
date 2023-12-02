#include <string>
#include <iostream>


extern bool player_status;

extern char* gap_ptr;

extern int score_X;

extern int score_O;

char playground[] =
	{
		// Table*
		201 , 205 , 205 , 205 , 203 , 205 , 205 , 205 , 203 , 205 , 205 , 205 , 187 , 10 ,
		186 , ' ' , ' ' , ' ' , 186 , ' ' , ' ' , ' ' , 186 , ' ' , ' ' , ' ' , 186 , 10 ,
		204 , 205 , 205 , 205 , 206 , 205 , 205 , 205 , 206 , 205 , 205 , 205 , 185 , 10 ,
		186 , ' ' , ' ' , ' ' , 186 , ' ' , ' ' , ' ' , 186 , ' ' , ' ' , ' ' , 186 , 10 ,
		204 , 205 , 205 , 205 , 206 , 205 , 205 , 205 , 206 , 205 , 205 , 205 , 185 , 10 ,
		186 , ' ' , ' ' , ' ' , 186 , ' ' , ' ' , ' ' , 186 , ' ' , ' ' , ' ' , 186 , 10 ,
		200 , 205 , 205 , 205 , 202 , 205 , 205 , 205 , 202 , 205 , 205 , 205 , 188 , 10 ,
	};

char player_tab[14] =
{
	10 , ' ' , ' ' , ' ' , 'X' , ' ' , '0' , ':' , '0' , ' ' , 'O' , ' ' , ' ' , ' '
};


static void placing()
{
	// Placing gaps into their places
	playground[16] = gap_ptr[0];
	playground[20] = gap_ptr[1];
	playground[24] = gap_ptr[2];
	playground[44] = gap_ptr[3];
	playground[48] = gap_ptr[4];
	playground[52] = gap_ptr[5];
	playground[72] = gap_ptr[6];
	playground[76] = gap_ptr[7];
	playground[80] = gap_ptr[8];
}

static void output()
{
	// Creating string for faster output
	std::string console_out;

	// Copying PLAYGROUND array into CONSOLE_OUT
	for (int index = 0; index < 97; index++)
	{
		console_out += playground[index];
	}

	// Copying PLAYER_TAB array into CONSOLE_OUT
	for (int index = 0; index < 14; index++)
	{
		console_out += player_tab[index];
	}

	// Sending CONSOLE_OUT to console
	std::cout << console_out;

	return;
}

static void player()
{

	// If plays [X], bool player == true
	// If plays [O], bool player == false
	if (player_status == true)
	{
		player_tab[2]  = 254;	// Activating    [x] player's indicator
		player_tab[12] = ' ';	// De-Activating [O] player's indicator
	}
	else
	{
		player_tab[2]  = ' ';	// Activating    [x] player's indicator
		player_tab[12] = 254;	// De-Activating [O] player's indicator
	}

	// Placing scores into PLAYER_TAB[]
	player_tab[6] = score_X;
	player_tab[8] = score_O;

	return;
}

static void screen_refresh()
{
	placing();
	player();
	output();

}
