#include "sisip_kode.h"
#include <stdio.h>

void insertTreeHelper(ElType x, BinTree P)
{
    if (x < ROOT(P))
    {
        if (LEFT(P) == NULL)
        {
            LEFT(P) = newTreeNode(x);
        }
        else
        {
            insertTree(x, LEFT(P));
        }
    }
    else if (x > ROOT(P))
    {
        if (RIGHT(P) == NULL)
        {
            RIGHT(P) = newTreeNode(x);
        }
        else
        {
            insertTree(x, RIGHT(P));
        }
    }
}

BinTree insertTree(ElType x, BinTree P)
{
    if (isTreeEmpty(P))
    {
        return NewTree(x, NULL, NULL);
    }

    insertTreeHelper(x, P);

    return P;
}