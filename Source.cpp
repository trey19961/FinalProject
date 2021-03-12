#include <iostream>
#include "Room.h"
#include "Player.h"
#include "map.h"

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
	Player player1;
	cout << player.getWeapon() ->getName() << "\t" << player.getWeapon() << endl;
	player.setWeapon(new Cross_Bow)());
	
	
	Item laptop("Laptop", "An old, beat-up laptop computer.", 1);
	Item flashdrive("Flash Drive", "A 64 GB flashdrive with a label that says 'KEY'", 2);
	Item hdmiCable("HDMI Cable", "A 6-foot long HDMI cable.", 3);

	vector<Item> room1Items(0), room2Items(0);
	room1Items.push_back(laptop);
	room1Items.push_back(flashdrive);
	room2Items.push_back(hdmiCable);
	Room start("Starting Room", "Around you are a few desks and some strange looking equipment. \nThere are doors to the south and east.", room1Items, 0, 0, 0);
	Room second("Next Room", "There is one desk in the room that is empty except for a desktop computer. \nOn the ceiling is a projector.", room2Items, 1, 0, 0);
	Map lab;
	lab.addRoom(start, 0, 0, 0);
	lab.addRoom(second, 1, 0, 0);
	lab.addRoute(start, second);
	lab.addRoute(second, start);
	vector<Item> startingInv;
	Player player1(start, startingInv);
	while (true)
	{
		Room current = player1.getCurrentRoom();
		if (player1.getChangedRooms())
		{
			cout << current.toString();
		}
		cout << "Which direction would you like to go?" << endl << "1: North" << endl << "2: South" << endl << "3: West" << endl << "4: East" << endl;
		int decision = acceptInput(4);
		switch (decision)
		{
		case 1:
			player1.setCurrentRoom(lab.toNorth(current.getX(), current.getY(), current.getZ()));
			break;
		case 2:
			player1.setCurrentRoom(lab.toSouth(current.getX(), current.getY(), current.getZ()));
			break;
		case 3:
			player1.setCurrentRoom(lab.toWest(current.getX(), current.getY(), current.getZ()));
			break;
		default:
			player1.setCurrentRoom(lab.toEast(current.getX(), current.getY(), current.getZ()));
			break;
		}

		cout << endl;

	}
	Weapons
}
