#include "FaktorialJurnal.h"

int faktorial(int n)
{
    if (n == 0) return 1;
    return n * faktorial(n - 1);
}