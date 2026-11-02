#include"selang_seling.h"
#include "linkedlist.h"
#include <stdio.h>

void selangSeling(List *l)
{
    if (isEmpty(*l)) return;

    Address p = *l;
    
    while (p != Nil && NEXT(p) != Nil)
    {
        Address terakhir = lepasTerakhir(&(NEXT(p)));

        if (terakhir != Nil)
        {
            NEXT(terakhir) = NEXT(p);
            NEXT(p) = terakhir;

            p = NEXT(terakhir);
        }
    }
}
