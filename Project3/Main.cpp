#include<iostream>
#include "Rooms.h"
#include "Mystring.h"
#include "Player.h"
#include <Windows.h>

using namespace std;

class Player
{
public:

	Player(Room &room) :m_index(0), currentRoom(&room) //Setting player to the room 0.
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
			cout << "s" << currentRoom->p_info;
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





};

int main()
{

	bool runGame = true;
	int x = 0;

	int y = 0;

	int count = 0;

	Room room0 = Room(0, 1, 1, 0, "This room is Empty \n \nThere is a door behind you. \n There is a door to your right." );
	Room room1 = Room(0, 1, 1, 1, "This room is Occupied by a Family of 4. \n \nThere is a door behind you. \nThere is a door to your left. \nThere is a door to your right.\n \nChoose a direction. \n \n");
	Room room2 = Room(0, 1, 1, 1, "This room is full of Empty Boxes  \n \nThere is a door behind you. \nThere is a door to your left. \nThere is a door to your right. \n \nChoose a direction. \n \n");
	Room room3 = Room(0, 1, 0, 1, "This room has a underground Door. \n \nThere is a door behind you. \nThere is a door to your left. \n \nChoose a direction.\n \n  \n \n \n \n Enter the code to the door to escape. \n \n If you do not know the password, you must search for it ");

	Room room4 = Room(1, 1, 0, 0, "This room has a bag of rocks on the floor. \n \nThere is a door in front of you. \nThere is a door behind you. \nThere is a door to your right. \n \nChoose a direction. \n \n ");
	Room room5 = Room(1, 1, 1, 1, "This room is has 6 Winnie dogs in it. \n \nThere is a door in front of you. \nThere is a door behind you. \nThere is a door to your left. \nThere is a door to your right. ");
	Room room6 = Room(1, 1, 1, 1, "This room is Purple \n \nThere is door in front of you. \nThere is a door behind you. \nThere is a door to your left. \nThere is a door to your right \n \nChoose a direction. \n \n");
	Room room7 = Room(1, 1, 0, 1, "This room is Orange \n \nThere is a door in front of you. \nThere is a door behind you. \nThere is a door to your left. \n \nChoose you direction. \n \n");

	Room room8 = Room(1, 1, 0, 0, "This room is White \n \nThere is a door in front of you. \nThere is a door behind you. \nThere is a door to your right. \n \nChoose a direction. \n \n");
	Room room9 = Room(1, 1, 1, 1, "This room is Grey\n \nThere is a door in front of you. \nThere is a door behind you.\nThere is a door to your left. \nThere is a door to your right. \n \nChoose a direction. \n \n");
	Room room10 = Room(1, 1, 1, 1, "This room is Black \n \nThere is a door in front of you. \nThere is a door behind you. \nThere is a door to your left. \nThere is a door to your right.\n \nChoose a direction. \n \n");
	Room room11 = Room(1, 1, 0, 1, "This room has a note that says 'Password: p' \n \nThere is a door in front of you. \nThere is a door behind you. \nThere is a door to your left. \n \nChoose a direction. \n \n");

	Room room12 = Room(1, 0, 0, 1, "This room is Green \n \nThere is a door in front of you. \nThere is a door to your right. \n \nChoose a direction. \n \n");
	Room room13 = Room(1, 0, 1, 0, "This room is Yellow \n \nThere is a door in front of you. \nThere is a door to your left. \nThere is a door to your right. \n \n");
	Room room14 = Room(1, 0, 1, 1, "This is room is Red \n \nThere is a door in front of you. \nThere is a door to your left. \nThere is a door to your right. \n \n");
	Room room15 = Room(1, 0, 1, 0, "This room is Blue \n \n There is a door in front of you. \nThere is a door to your left. \n \nChoose a direction. \n \n");

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
				case 'p':
				{
					cout << "\n \n";
					cout << "Congragulations you have Escaped The Random Maze!! \n \n";
					system("pause");
					return 0;
				}

				default:
				{
					system("cls");
					cout << "\n \n";
					cout << "Invalid Entry.";
					cout << "\n \n";
					break;
				}

				}

			}
		}

		

	}
	return 1;

}
