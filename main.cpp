#include "Gun.h"
#include "Soldier.h"

using namespace std;

void test()
{
    Soldier sanduo("XuSanduo");
    sanduo.addGun(new Gun("AK47"));
    //sanduo.reloadGun(20);
    sanduo.fire();
}

int main()
{
    test();
    return 0;
}