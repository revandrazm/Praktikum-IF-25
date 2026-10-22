#include "CatatanMebel.h"

void faktorialP(int n, int *hasil)
{
    if (n == 0)
    {
        *hasil = 1;
    } else
    {
        int revandra;
        faktorialP(n - 1, &revandra);

        *hasil = n * revandra;
    }
}