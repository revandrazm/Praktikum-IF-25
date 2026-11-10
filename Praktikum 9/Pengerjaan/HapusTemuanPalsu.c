#include "listrec.h"
#include <stdio.h>
#include <stdlib.h>

void hapusTemuan(List *l, int target)
{
    if (isEmpty(*l)) return;

    if (INFO(*l) == target)
    {
        *l = NEXT(*l);
        hapusTemuan(l, target);
    }
    else
    {
        hapusTemuan(&NEXT(*l), target);
    }
}