#include <iostream>
#include "Room.h"
#include "Player.h"

using namespace std;

int acceptInput(int max)
{
	int input;
	while (true) 
	{
		cout << "Choose an action: ";
		if (cin >> input && input > 0 && input <= max)
			break;
		cout << "Choose an action number 1-" << to_string(max) << "." << endl;
	}
	return input;
}

int main() {
	Item laptop("Laptop", "An old, beat-up laptop computer.", 1);
	Item flashdrive("Flash Drive", "A 64 GB flashdrive with a label that says 'KEY'", 2);

	vector<Item> room1Items(0);
	room1Items.push_back(laptop);
	room1Items.push_back(flashdrive);
	Room start("Starting Room", "Around you are a few desks and some strange looking equipment. \nThere are doors to the north and west.", room1Items, 0, 6);
	vector<Item> startingInv;
	Player player1(0, 6, startingInv);
	/*
	while (true)
	{
		if (player1.getChangedRooms())
		{
			//get current room needs to be added to player class
			cout << player1.getCurrentRoom();
		}

	}
	*/
}