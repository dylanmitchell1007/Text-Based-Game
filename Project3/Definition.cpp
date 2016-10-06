#include "Player.h"
#include "Rooms.h"
#include "Mystring.h"
#include <windows.h>
#include <iostream>
using namespace std;

int Player::P_North()
{

	p_ypos--;
	return p_ypos;

}

int Player::P_South()
{

	p_ypos++;
	return p_ypos;
}

int Player::P_West()
{

	p_xpos--;
	return p_xpos;
}
int Player::P_East()
{

	p_xpos++;
	return p_xpos;
}










Room::Room(bool North, bool South, bool West, bool East, const char * entry)
{
	p_North = North;
	p_South = South;
	p_West = West;
	p_East = East;
	p_entry = entry;

}

	Player::Player(int x, int y, bool item)
	{
		p_xpos = x;
		p_ypos = y;

		p_bannana = item;


	}



	void Player::move(Player test, char * string)
	{
		MyString a = MyString(string);
		Room z = Room();

		if (a.subString("North") == true && z.p_North == true)
		{
			P_North();
		}


		char Room[4][4];

		void Room::move(int V, int H)
		{
			int y2 = p_xpos + V;

		}




	}

	