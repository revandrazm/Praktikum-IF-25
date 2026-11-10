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

    if (isEmpty(*angka) || isEmpty(*jumlah))
    {
        *angka = newNode(head(l));
        *jumlah = newNode(1);

        kelompokkan(NEXT(l), angka, jumlah);
    }
    else if(head(l) == head(*angka))
    {
        INFO(*jumlah)++;

        kelompokkan(NEXT(l), angka, jumlah);
    }
    else
    {
        NEXT(*angka) = newNode(head(l));
        NEXT(*jumlah) = newNode(1);

        kelompokkan(NEXT(l), &NEXT(*angka), &NEXT(*jumlah));
    }
}