#include "listrec.h"
#include <stdio.h>

int hitungBerbahaya(List l, int batas)
{
    if (isEmpty(l)) return 0;

    if (INFO(l) > batas)
    {
        return 1 + hitungBerbahaya(NEXT(l), batas);
    }
    else
    {
        return hitungBerbahaya(NEXT(l), batas);
    }
}