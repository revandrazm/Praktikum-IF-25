#include "list_puncak.h"

List output = NIL;

boolean checkPuncak(Address p1, Address p2, Address p3)
{
    if (INFO(p2) > INFO(p1) && INFO(p2) > INFO(p3)) return true;

    return false;
}

List ambilPuncak(List l)
{
    if (isEmpty(l)) return output;
    if (isEmpty(NEXT(l))) return output;
    if (isEmpty(NEXT(NEXT(l)))) return output;

    if (checkPuncak(l, NEXT(l), NEXT(NEXT(l))))
    {
        if (output == NIL)
        {
            output = newNode(INFO(NEXT(l)));
        }
        else
        {
            output = konsdot(output, INFO(NEXT(l)));
        }
    }

    ambilPuncak(NEXT(l));
}