#pragma once

#include <vector>
#include "Item.h"
#include "Room.h"

class Player
{
private:
	Room currentRoom;
	bool changedRooms;
	vector<Item> inventory;
public:
	~Player() {}
	Player(Room location, vector<Item> inv) 
	{
		setCurrentRoom(location);
		setInv(inv);
	}

	Room getCurrentRoom() { return currentRoom; }
	vector<Item> getInv() { return inventory; }
	bool getChangedRooms() { return changedRooms; }

	void setCurrentRoom(Room location)
	{
		currentRoom = location;
		setChangedRooms(true);
	}
	void setChangedRooms(bool changed) { changedRooms = changed; }
	void setInv(vector<Item> inv) { inventory = inv; }

	void addItem(Item add) { inventory.push_back(add); }
};