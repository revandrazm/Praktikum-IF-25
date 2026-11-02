#include "ArsipTerurut.h"
#include <stdio.h>

void sisipUrut(List *l, int nilai)
{
    Address new_node = newNode(nilai);

    if ((*l == Nil) || nilai <= INFO(*l))
    {
        NEXT(new_node) = *l;
        *l = new_node;
    } else
    {
        Address p = *l;

        while ((NEXT(p) != Nil) && (INFO(NEXT(p)) <= nilai))
        {
            p = NEXT(p);
        }

        NEXT(new_node) = NEXT(p);
        NEXT(p) = new_node;
    }
}