#pragma once

#include "Item.h"
#include <vector>
#include <string>

using namespace std;

class Room
{
private:
    string name, description;
    int x, y;
    vector<Item> items;

public:
    Room(string n, string d, vector<Item> it, int xpos, int ypos)
    {
        setName(n);
        setDescription(d);
        setItems(it);
        x = xpos;
        y = ypos;
    }

    string getName() { return name; }
    string getDescription() { return description; }
    vector<Item> getItems() { return items; }

    void setName(string n) { name = n; }
    void setDescription(string d) { description = d; }
    void setItems(vector<Item> it) { items = it; }
    void AddItem(Item add) { items.push_back(add); }

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