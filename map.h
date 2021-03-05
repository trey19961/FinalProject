#pragma once

#include "Room.h"
#include <vector>
#include <algorithm>

using namespace std;

class Route
{
private:
	Room x, y;
public:
	Route(Room start, Room end)
	{
		x = start;
		y = end;
	}

	Room getX() { return x; }
	Room getY() { return y; }

	friend bool operator == (Route x, Route y)
	{
		if (x.x == y.x && x.y == y.y)
			return true;
		else
			return false;
	}
};

class Map
{
private:
	Room rooms[9][9][3];
	vector<Route> routes;

public:
	Map() {}
	~Map() {}

	void addRoom(Room r, int x, int y, int z)
	{
		rooms[x][y][z] = r;
	}
	void addRoute(Room x, Room y)
	{
		routes.push_back(Route(x, y));
	}
	
	void deleteRoute(Room x, Room y)
	{
		vector<Route>::iterator i;
		Route comparison(x, y);
		for (i = routes.begin(); i != routes.end(); ++i)
		{
			if(*i == comparison)
			{
				routes.erase(i);
				break;
			}
		}
	}

	bool verifyRoute(Room x, Room y)
	{
		vector<Route>::iterator i;
		Route comparison(x, y);
		for (i = routes.begin(); i != routes.end(); ++i)
		{
			if (*i == comparison)
			{
				return true;
			}
		}
		return false;
	}


	Room toNorth(int x, int y, int z)
	{
		return rooms[x][y + 1][z];
	}

	Room toSouth(int x, int y, int z)
	{
		return rooms[x][y - 1][z];
	}

	Room toWest(int x, int y, int z)
	{
		return rooms[x - 1][y][z];
	}
	
	Room toEast(int x, int y, int z)
	{
		return rooms[x + 1][y][z];
	}


};

