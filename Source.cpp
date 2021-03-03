#include <iostream>
#include "Room.h"

using namespace std;

int main() {
	Item laptop("Laptop", "An old, beat-up laptop computer.", 1);
	Item flashdrive("Flash Drive", "A 64 GB flashdrive with a label that says 'KEY'", 2);

	vector<Item> room1Items(0);
	room1Items.push_back(laptop);
	room1Items.push_back(flashdrive);
	Room start("Starting Room", "Around you are a few desks and some strange looking equipment. \nThere are doors to the north and west.", room1Items);
	cout << start.toString();
}