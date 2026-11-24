#include "order_guardian.h"

boolean checkInorder(BinTree P, Address *prev)
{
    if (isTreeEmpty(P)) return true;

    if (!checkInorder(LEFT(P), prev))
    {
        return false;
    }

    if ((*prev != NULL) && (ROOT(*prev) >= ROOT(P)))
    {
        return false;
    }

    *prev = P;

    return checkInorder(RIGHT(P), prev);
}

boolean checkOrder(BinTree P)
{
    Address prev = NULL;

    return checkInorder(P, &prev);
}