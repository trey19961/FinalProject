#pragma once

#include <vector>
#include "Item.h"

class Player
{
private:
	int x, y;
	vector<Item> inventory;
public:
	Player(int xpos, int ypos, vector<Item> inv) 
	{
		setX(xpos);
		setY(ypos);
		setInv(inv);
	}

	int getX() { return x; }
	int getY() { return y; }
	vector<Item> getInv() { return inventory; }

	void setX(int xpos) { x = xpos; }
	void setY(int ypos) { y = ypos; }
	void setInv(vector<Item> inv) { inventory = inv; }

	void addItem(Item add) { inventory.push_back(add); }
};