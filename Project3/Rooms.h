#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

class Room
{


public:
	Room() {}
	Room(int x, int y);
	Room *P_North;
	Room *P_South;
	Room *P_West;
	Room *P_East;
	Room[4][4]
	{
			p_ypos = y;
			p_xpos = x;
	}
	/*bool CheckPlacement(int, int);

	bool CheckPlacement(int p_xpos, int p_ypos)
	{
		return (Room[x][y] == '1') ? true : false;
	}

*/

	Room(bool North, bool South, bool West, bool East, const char * entry);

	int p_ypos;
	int p_xpos;
	bool p_North;
	bool p_South;
	bool p_West;
	bool p_East;
	const char * p_entry;


private:


	const char * c_entry;

	

	

	};