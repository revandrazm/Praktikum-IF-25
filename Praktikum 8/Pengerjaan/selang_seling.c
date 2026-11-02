#include"selang_seling.h"
#include "linkedlist.h"
#include <stdio.h>

void selangSeling(List *l)
{
    if (isEmpty(*l)) return;

    Address p = *l;
    Address terakhir = lepasTerakhir(l);
    Address temp = NEXT(p);

    do 
    {
        NEXT(p) = terakhir;
        NEXT(terakhir) = temp;
        p = temp;
        terakhir = lepasTerakhir(l);
        temp = NEXT(p);
    } while (NEXT(terakhir) != temp);
}   