#pragma once

#include<iostream>

using namespace std;


class Player
{
public:

void Player::move(Player test, char* room);

Player() {}
Room *location;
Player(int x, int y, bool item);
int p_ypos;
int p_xpos;
int P_North();
int P_South();
int P_West();
int P_East();

bool p_bannana;

			





private:
	
	int x_position;
	int y_position;
	bool bannana = false;














};
