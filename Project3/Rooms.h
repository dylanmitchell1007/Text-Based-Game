#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

class Room
{


public:
	Room() {}
	Room(bool, bool, bool, bool, const char*);

private:

	bool c_dark;
	bool c_locked;
	bool c_enemy;
	bool c_weapon;
	const char * c_entry;


};