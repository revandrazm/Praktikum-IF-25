#include "cari_kode.h"

boolean isMemberTree(ElType x, BinTree P)
{
    if (isTreeEmpty(P)) return false;

    if (ROOT(P) == x) return true;

    if (x > ROOT(P))
    {
        return isMemberTree(x, RIGHT(P));
    }
    else
    {
        return isMemberTree(x, LEFT(P));
    }
}