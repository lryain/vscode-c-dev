#pragma once
#include <string>
#include "Gun.h"
using namespace std;

class Soldier
{
public:
    Soldier(string name);
    ~Soldier();
    void reloadGun(int num);
    void addGun(Gun *ptr_gun);
    bool fire();

private:
    string _name;
    Gun *_ptr_gun;
};