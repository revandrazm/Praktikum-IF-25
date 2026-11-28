#include "segel_anomali.h"

void deleteTree(BinTree *P, ElType x)
{
    if (isOneElmt(*P))
    {
        *P = NULL;
        return;
    }

    if (isUnerLeft(*P) && (ROOT(*P) == x))
    {
        BinTree temp = *P;
        *P = LEFT(*P);
        deallocTreeNode(temp);
        return;
    }
    else if (isUnerRight(*P) && (ROOT(*P) == x))
    {
        BinTree temp = *P;
        *P = RIGHT(*P);
        deallocTreeNode(temp);
        return;
    }
    else if (isBinary(*P) && (ROOT(*P) == x))
    {
        ROOT(*P) = removeMax(&LEFT(*P));
    }
    else
    {
        if (x < ROOT(*P))
        {
            deleteTree(&LEFT(*P), x);
        }
        else if (x > ROOT(*P))
        {
            deleteTree(&RIGHT(*P), x);
        }
    }
}