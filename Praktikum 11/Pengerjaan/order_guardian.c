#include "order_guardian.h"

boolean checkInorder(BinTree P, Address *prev)
{
    if (isTreeEmpty(P)) return true;
    if (isOneElmt(P))
    {
        *prev = P;
    }

    checkInorder(LEFT(P), prev);

    if (ROOT(*prev) < ROOT(P))
    {
        *prev = P;
        checkInorder(P, prev);
    }
    else
    {
        return false;
    }

    checkInorder(RIGHT(P), prev);

    return true;
}

boolean checkOrder(BinTree P) {
    Address prev = NULL;

    return checkInorder(P, &prev);
}