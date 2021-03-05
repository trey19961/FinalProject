#pragma once

#include "Item.h"
#include <vector>
#include <string>

using namespace std;

class Room
{
private:
    string name, description;
    int x, y, z;
    vector<Item> items;

public:
    Room() {}
    ~Room() {}
    Room(string n, string d, vector<Item> it, int xpos, int ypos, int zpos)
    {
        setName(n);
        setDescription(d);
        setItems(it);
        x = xpos;
        y = ypos;
        z = zpos;
    }

    string getName() { return name; }
    string getDescription() { return description; }
    vector<Item> getItems() { return items; }
    int getX() { return x; }
    int getY() { return y; }
    int getZ() { return z; }

    void setName(string n) { name = n; }
    void setDescription(string d) { description = d; }
    void setItems(vector<Item> it) { items = it; }
    void AddItem(Item add) { items.push_back(add); }

    friend bool operator == (const Room x, const Room y)
    {
        if (x.x == y.x && x.y == y.y)
            return true;
        else
            return false;
    }

    string toString()
    {
        string s = description + "\n";
        if (items.size() != 0)
        {
            s += "In this room are the following items:\n";
            for (unsigned int i = 0; i < items.size(); i++)
            {
                s += items[i].getName();
                s += "\n";
            }
        }
        return s;
    }
};