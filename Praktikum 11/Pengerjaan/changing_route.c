#include "changing_route.h"
#include "bintree.h"
#include "boolean.h"

boolean isEven(int a)
{
    return (a % 2 == 0) ? true : false;
}

boolean changingRoute(BinTree P)
{
    if (isTreeEmpty(P)) return false;
    if (isOneElmt(P)) return true;

    if (isEven(ROOT(P)))
    {
        if (LEFT(P) != NULL)
        {
            if (!isEven(ROOT(LEFT(P))))
            {
                return changingRoute(LEFT(P));
            }
        }

        if (RIGHT(P) != NULL)
        {
            if (!isEven(ROOT(RIGHT(P))))
            {
                return changingRoute(RIGHT(P));
            }
        }
    }
    else
    {
        if (LEFT(P) != NULL)
        {
            if (isEven(ROOT(LEFT(P))))
            {
                return changingRoute(LEFT(P));
            }
        }

        if (RIGHT(P) != NULL)
        {
            if (isEven(ROOT(RIGHT(P))))
            {
                return changingRoute(RIGHT(P));
            }
        }
    }

    return false;
}