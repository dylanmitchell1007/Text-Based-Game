#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

class Room
{


public:

	Room(bool North, bool South, bool West, bool East, const char * entry);

	int p_ypos;
	int p_xpos;
	bool p_North;
	bool p_South;
	bool p_West;
	bool p_East;
	const char * p_decription;
	
	Room() {};
	Room(int x, int y);
	Room *P_North;
	Room *P_South;
	Room *P_West;
	Room *P_East;
	
		/*bool CheckPlacement(int, int);

		bool CheckPlacement(int p_xpos, int p_ypos)
		{
			return (Room[x][y] == '1') ? true : false;
		}

	*/



	
};


class Node
{
	Node() {};
	Node(bool North, bool South, bool West, bool East, const char * entry);
	bool p_North;
	bool p_South;
	bool p_West;
	bool p_East;






};