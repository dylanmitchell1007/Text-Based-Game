#pragma once

#include<iostream>

using namespace std;


class Player
{
	Player(Room &room) :m_index(0), currentRoom(&room)
	{
		std::cout << currentRoom->m_description;
	}
		Room* currentRoom;
	int m_index;
	void MoveRight()
	{
		std::cout << currentRoom->m_description;
		currentRoom++;

	}




private:
	
	int x_position;
	int y_position;
	bool bannana = false;














};
