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
		m_index = 4;
		if (m_index < 16)
		{
			currentRoom += 4;
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
		m_index = 4;
		if (m_index < 16)
		{
			currentRoom -= 4;
			cout << currentRoom->p_info;
		}
		else
		{
			currentRoom->p_info;
			cout << "No \n";

		}
	}

	int x_position;
	int y_position;
	bool bannana = false;





};

int main()
{

	bool runGame = true;
	int x = 0;

	int y = 0;

	int count = 0;

	Room room0 = Room(0, 1, 1, 0, "This room is empty \n Entering Room 0");
	Room room1 = Room(0, 1, 1, 1, "This room is empty \n Entering Room 1");
	Room room2 = Room(0, 1, 1, 1, "This room is empty \n Entering Room 2");
	Room room3 = Room(0, 1, 0, 1, "This room is empty \n Entering Room 3");

	Room room4 = Room(1, 1, 0, 0, "This room is empty \n Entering Room 4");
	Room room5 = Room(1, 1, 1, 1, "This room is empty \n Entering Room 5");
	Room room6 = Room(1, 1, 1, 1, "This room is empty \n Entering Room 6");
	Room room7 = Room(1, 1, 0, 1, "This room is empty \n Entering Room 7");

	Room room8 = Room(1, 1, 0, 0, "This room is empty \n Entering Room 8");
	Room room9 = Room(1, 1, 1, 1, "This room is empty \n Entering Room 9");
	Room room10 = Room(1, 1, 1, 1, "This room is empty \n Entering Room 10");
	Room room11 = Room(1, 1, 0, 1, "This room is empty \n Entering Room 11");

	Room room12 = Room(1, 0, 0, 1, "This room is empty \n Entering Room 12");
	Room room13 = Room(1, 0, 1, 0, "This room is empty \n Entering Room 13");
	Room room14 = Room(1, 0, 1, 1, "This room is empty \n Entering Room 14");
	Room room15 = Room(1, 0, 1, 0, "You Found the exit!!!!!");

	Room nodes[16] = {
	room0,room1,room2,room3,
	room4,room5,room6,room7,
	room8,room9,room10,room11,
	room12,room13,room14,room15,

	};
	Player player1 = Player(nodes[0]);

	while (true)
	{
		system("cls");
		cout << "Welcome to the game! \n\n";
		cout << "Find the magical item \n \n";
		cout << "----INSTRUCTIONS---- \n \n";
		cout << "'w' to Move North \n \n";
		cout << "'s' to Move South \n \n";
		cout << "'a' to Move West \n \n";
		cout << "'d' to Move East \n \n";
		cout << "Good Luck \n \n";
		cout << "To Start Game Press 'S'";

		char StartGame;
		cin >> StartGame;

		switch (StartGame)
		{
		case 'S':
		{
			runGame = true;

			while (runGame = true)
			{

				char gameInput;
				cin >> gameInput;
				system("cls");


				switch (gameInput)
				{
				case 'w'://Move up when 'w' is selected
				{
					player1.moveup();
					break;
				}
				case 'a'://Move Left when 's' is selected
				{
					player1.moveleft();
					break;
				}

				case 'd'://Move right 'd' is selected
				{
					player1.MoveRight();
					break;
				}
				case 's'://Move down 's' is selected
				{
					player1.movedown();
					break;

				}


				}

			}
		}

		}

	}
	return 1;

}
