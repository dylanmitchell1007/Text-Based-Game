#include<iostream>
#include "Rooms.h"
#include "Mystring.h"
#include "Player.h"
#include <Windows.h>

using namespace std;



//class Player
//{
//	Player(Room &room) :m_index(0), currentRoom(&room)
//{
//	std::cout << currentRoom->p_info;
//}
//Room* currentRoom;
//int m_index;
//
//void MoveRight()
//{
//	std::cout << currentRoom->p_info;
//	currentRoom++;
//}
//
//void moveleft()
//{
//	std::cout << currentRoom->p_info;
//	currentRoom--;
//}
//
//void movedown()
//{
//	m_index += 4;
//	if (m_index < 16)
//	{
//		currentRoom += m_index;
//		cout << "Your currently in" << currentRoom->p_info;
//	}
//	else
//	{
//		cout << currentRoom->p_info;
//		cout << "No";
//
//	}
//}
//	void moveup()
//	{
//		m_index -= 4;
//		if (m_index < 0)
//		{
//			currentRoom -= m_index;
//			cout << currentRoom->m_description;
//
//		}
//

class Player
{
public:

	Player(Room &room) :m_index(0), currentRoom(&room)
	{
		std::cout << currentRoom->p_info;
	}
	Room* currentRoom;
	int m_index;

	void MoveRight()
	{
		std::cout << currentRoom->p_info;
		currentRoom++;
	}

	void moveleft()
	{
		std::cout << currentRoom->p_info;
		currentRoom--;
	}

	void movedown()
	{
		m_index += 4;
		if (m_index < 16)
		{
			currentRoom += m_index;
			cout << "Your currently in" << currentRoom->p_info;
		}
		else
		{
			cout << currentRoom->p_info;
			cout << "No";

		}
	}

	void moveup()
	{
		m_index -= 4;
		if (m_index < 0)
		{
			currentRoom -= m_index;
			cout << currentRoom->p_info;

		}
	}

		int x_position;
		int y_position;
		bool bannana = false;






		int main()
		{
			Player player1 = Player(0, 0, 0);

			bool runGame = true;
			int x = 0;

			int y = 0;

			int count = 0;

			Room room1 = Room(1, 0, 1, 0, "This room is empty \n Entering Room 1");
			Room room2 = Room(1, 0, 1, 1, "This room is empty \n Entering Room 2");
			Room room3 = Room(1, 0, 1, 1, "This room is empty \n Entering Room 3");
			Room room4 = Room(1, 0, 0, 1, "This room is empty \n Entering Room 4");

			Room room5 = Room(1, 1, 1, 0, "This room is empty \n Entering Room 5");
			Room room6 = Room(1, 1, 1, 1, "This room is empty \n Entering Room 6");
			Room room7 = Room(1, 1, 1, 1, "This room is empty \n Entering Room 7");
			Room room8 = Room(1, 1, 0, 1, "This room is empty \n Entering Room 8");

			Room room9 = Room(1, 1, 1, 0, "This room is empty \n Entering Room 9");
			Room room10 = Room(1, 1, 1, 1, "This room is empty \n Entering Room 10");
			Room room11 = Room(1, 1, 1, 1, "This room is empty \n Entering Room 11");
			Room room12 = Room(1, 1, 0, 1, "This room is empty \n Entering Room 12");

			Room room13 = Room(0, 1, 1, 0, "This room is empty \n Entering Room 13");
			Room room14 = Room(0, 1, 1, 1, "This room is empty \n Entering Room 14");
			Room room15 = Room(0, 1, 1, 1, "This room is empty \n Entering Room 15");
			Room room16 = Room(0, 1, 0, 1, "This room is empty \n Entering Room 16");

			Room nodes[16] = {
			room1,room2,room3,room4,
			room5,room6,room7,room8,
			room9,room10,room11,room12,
			room13,room14,room15,room16,

			};
			Player player1 = Player(nodes[0]);

			while (runGame = true)
			{
				char gameInput;
				cin >> gameInput;

				switch (gameInput)
				{
				case 'w'://Move down when 'w' is selected
				{
					player1.movedown();
					break;
				}
				case 's'://Move Left when 's' is selected
				{
					player1.moveleft();
					break;
				}

				}









				system("pause");
				return 1;





			}

