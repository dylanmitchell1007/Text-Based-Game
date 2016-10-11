#pragma once
#include <iostream>
#include <windows.h>
using namespace std;


 
class Room //My class named Room
{
public:
	Room() {};
	
	Room(bool n, bool s, bool e, bool w, const char* description) : p_info(description)
	{
		p_info = description;
	}


	const char* p_info;
	bool g_north;
	bool g_south;
	bool g_east;
	bool g_west;





};