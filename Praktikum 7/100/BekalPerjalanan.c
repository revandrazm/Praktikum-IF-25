#include "BekalPerjalanan.h"
#include <stdio.h>

void tambahBekal(List l, int startIdx, int *saldo)
{
    if (startIdx == l.nEff)
    {
        return;
    } else
    {
        int new_saldo = *saldo + l.contents[startIdx];
        *saldo = new_saldo;
        tambahBekal(l, startIdx + 1, saldo);
    }
}