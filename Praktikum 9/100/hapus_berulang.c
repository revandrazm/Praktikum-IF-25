#include "linkedlist.h"
#include <stdio.h>

boolean foundX(List l, ElType target)
{
    if (isEmpty(l)) return false;

    if (INFO(l) == target)
    {
        return true;
    }
    else
    {
        return foundX(tail(l), target);
    }
}

void deleteX(List *l, ElType target)
{
    if (isEmpty(*l)) return;

    if (INFO(*l) == target)
    {
        *l = NEXT(*l);
        deleteX(l, target);
    }
    else
    {
        deleteX(&NEXT(*l), target);
    }
}

void hapusBerulang(List *l)
{
    if (isEmpty(*l)) return;

    ElType target = head(*l);

    if (foundX(tail(*l), target))
    {
        deleteX(l, target);
        hapusBerulang(l);
    }
    else
    {
        hapusBerulang(&NEXT(*l));
    }
}