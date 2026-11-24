#include "panen_daun.h"
#include "boolean.h"

void panenDaunHelper(BinTree P)
{
    if(isTreeEmpty(P)) return;

    if (isOneElmt(LEFT(P)))
    {
        deallocTreeNode(LEFT(P));
        LEFT(P) = NULL;
    }
    
    if (isOneElmt(RIGHT(P)))
    {
        deallocTreeNode(RIGHT(P));
        RIGHT(P) = NULL;
    }
    
    panenDaunHelper(LEFT(P));
    panenDaunHelper(RIGHT(P));
}

void panenDaun(BinTree P)
{
    if (isTreeEmpty(P)) return;
    
    if (isOneElmt(P))
    {
        return;
    }
    else
    {
        panenDaunHelper(P);
    }
}
