extern char* gap_ptr;
extern bool player_status;

static void controls(int current_place, int movement)
{
	// If movement is (0), then current player is placing his initial
	if (movement == 0)
	{
		// Bool expression for making player to place his initial in vacant place
		bool X_picked = gap_ptr[current_place] == 'X';
		bool O_picked = gap_ptr[current_place] == 'O';
		if (!(X_picked || O_picked))
		{
			if (player_status = true)	// If PLAYER_STATUS is TRUE , then current player is [X]
			{
				gap_ptr[current_place] = 'x';
			}
			else						// If PLAYER_STATUS is FALSE, then current player is [O]
			{
				gap_ptr[current_place] = 'o';
			}
		}

		return;
	}

	int new_position = current_place + movement;
	if (new_position < 0)
	{
		new_position = 0;
	}
	if (new_position > 8)
	{
		new_position = 8;
	}

	bool X_picked = gap_ptr[current_place] == 'x';
	bool O_picked = gap_ptr[current_place] == 'o';
	if (X_picked == true)
	{
		gap_ptr[current_place] = 'X';
	}
	else if (O_picked == true)
	{
		gap_ptr[current_place] = 'O';
	}
	else
	{
		gap_ptr[current_place] = 176;
	}

	X_picked = gap_ptr[new_position] == 'X';
	O_picked = gap_ptr[new_position] == 'O';
	if (X_picked == true)
	{
		gap_ptr[new_position] = 'x';
	}
	else if (O_picked == true)
	{
		gap_ptr[new_position] = 'o';
	}
	else
	{
		gap_ptr[new_position] = 178;
	}

	return;
}