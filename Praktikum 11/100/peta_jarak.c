#include "peta_jarak.h"

BinTree petaJarakHelper(BinTree new, BinTree original, int total_jarak)
{
    if (isTreeEmpty(original)) return NULL;
    if (isOneElmt(original)) return NewTree(ROOT(original) + total_jarak, NULL, NULL);

    BinTree newHelper = NewTree(ROOT(original) + total_jarak, NULL, NULL);

    if (LEFT(original) != NULL)
    {
        LEFT(newHelper) = petaJarakHelper(LEFT(newHelper), LEFT(original), ROOT(newHelper));
    }

    if (RIGHT(original) != NULL)
    {
        RIGHT(newHelper) = petaJarakHelper(RIGHT(newHelper), RIGHT(original), ROOT(newHelper));
    }

    return newHelper;
}

BinTree petaJarak(BinTree original)
{
    if (isTreeEmpty(original)) return NULL;
    if (isOneElmt(original)) return NewTree(ROOT(original), NULL, NULL);

    BinTree new = NewTree(ROOT(original), NULL, NULL);
    LEFT(new) = petaJarakHelper(LEFT(new), LEFT(original), ROOT(original));
    RIGHT(new) = petaJarakHelper(RIGHT(new), RIGHT(original), ROOT(original));

    return new;
}