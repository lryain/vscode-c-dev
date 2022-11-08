#include "Gun.h"
#include <iostream>
using namespace std;

void Gun::reload(int bullet_num)
{
    this-> _bullet_count += bullet_num;
}

bool Gun::shoot()
{
    if(this->_bullet_count<=0)
    {
        cout << "There is no bullet!" << endl;
        return false;
    }

    this->_bullet_count -=1;
    cout << "Use<" << this->_type << "> " << "Shoot 1 ->";
    return true;
}