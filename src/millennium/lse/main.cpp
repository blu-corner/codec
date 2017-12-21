#include <iostream>
#include "LsePackets.h"

using namespace std;
using namespace LsePackets;

int main ()
{
    cout << "hello" << endl;
    LseNewOrder* no = new LseNewOrder ();

    no->setClientOrderID("hello!!");
    no->setTraderID("CP!!");
    no->setLimitPrice (120.01);
    // cout << no->getClientOrderID () << endl;
    cout << no->toString () << endl;
}
