#include "ArsipTerurut.h"
#include <stdio.h>

void displayList(List l) {
    printf("[");
    Address p = l;
    while (p != Nil) {
        printf("%d", INFO(p));
        if (NEXT(p) != Nil) {
            printf(",");
        }
        p = NEXT(p);
    }
    printf("]\n");
}

void sisipUrut(List *l, int nilai)
{
    Address node = newNode(nilai);

    if (*l == Nil)
    {
        *l = node;
    } else if (nilai < INFO(*l))
    {
        Address temp = *l;
        NEXT(node) = *l;
        *l = node;
    } else if (nilai >= INFO (*l))
    {
        NEXT(*l) = node;
    } else
    {
        Address p = *l;

        while (INFO(p) > INFO(NEXT(p)))
        {
            p = NEXT(p);
        }

        printf("%d\n", INFO(p));
    }
}