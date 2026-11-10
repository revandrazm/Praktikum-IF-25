#include "linkedlist.h"
#include <stdio.h>

void kelompokkan(List l, List *angka, List *jumlah)
{
    if (isEmpty(l))
    {
        *angka = NIL;
        *jumlah = NIL;
        
        return;
    };

    List subAngka, subJumlah;
    kelompokkan(tail(l), &subAngka, &subJumlah);

    if (!isEmpty(subAngka) && head(l) == head(subAngka))
    {
        *angka = subAngka;
        *jumlah = subJumlah;

        INFO(*jumlah)++;
    }
    else
    {
        *angka = konso(head(l), subAngka);
        *jumlah = konso(1, subJumlah);
    }
}