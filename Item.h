#pragma once
#include <string>

using namespace std;

class Item
{
private:
    string name, description;
    int id;

public:
    Item() {}
    ~Item() {}
    Item(string n, string d, int idNum)
    {
        setName(n);
        setDescription(d);
        setId(idNum);
    }

    string getName() { return name; }
    string getDescription() { return description; }
    int getId() { return id; }

    void setName(string n) { name = n; }
    void setDescription(string d) { description = d; }
    void setId(int idNum) { id = idNum; }
};
