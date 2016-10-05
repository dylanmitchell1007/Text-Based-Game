#pragma once
#include<iostream>

#include <windows.h>
using namespace std;


class Grid
{
public:
	Grid(){}
	Grid(bool North, bool South, bool West, bool East, const char * entry);

		bool p_North;
		bool p_South;
		bool p_West;
		bool p_East;
		const const char * p_entry;


private:




}







