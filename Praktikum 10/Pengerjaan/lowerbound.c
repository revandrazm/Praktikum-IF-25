#include "lowerbound.h"

List output = NIL;

List lowerBound(List l, int k)
{
    if (isEmpty(l)) return output;

    if (INFO(l) > k)
    {
        insertLast(&output, INFO(l));
    }

    lowerBound(NEXT(l), k);
}