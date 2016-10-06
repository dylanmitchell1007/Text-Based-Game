#include<iostream>
#include "Rooms.h"
#include "Mystring.h"
#include "Player.h"
#include <Windows.h>

using namespace std;

int main()
{
	Player player1 = Player(0, 0, 0);


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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	for (int y = 0; y < 16; y++)
	{
		for (int x = 0; x < 16; x++);
		{
			Room n = Room(x, y);
			nodes[count];
			count++;
		}



		system("pause");
		return 1;



}






}
