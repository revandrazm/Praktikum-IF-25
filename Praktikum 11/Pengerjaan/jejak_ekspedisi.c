#include "jejak_ekspedisi.h"
#include "bintree.h"
#include "boolean.h"

int hitungJejak(BinTree P)
{
    if (isTreeEmpty(P)) return 0;
    if (isOneElmt(P)) return 1;

    int count = 0;
    
    if (isUnerLeft(P))
    {
        return 1 + hitungJejak(LEFT(P));
    }
    else if (isUnerRight(P))
    {
        return 1 + hitungJejak(RIGHT(P));
    }
    else
    {
        return 1 + hitungJejak(LEFT(P)) + hitungJejak(RIGHT(P));
    }
}