#pragma once

#include<iostream>

using namespace std;


class Player
{
public:

Player() {}

Player(int x, int y, bool bannana);

int p_North();
int P_South();
int p_West();
int p_East();
bool p_bannana;

			





private:
	
	int x_position;
	int y_position;
	bool bannana = false;














};
