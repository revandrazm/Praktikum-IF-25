#include "DaftarTemuan.h"
#include <stdio.h>

void cetakTemuan(List l, int startIdx)
{
    if (startIdx == l.nEff)
    {
        return;
    } else
    {
        printf("%d\n", l.contents[startIdx]);
        cetakTemuan(l, startIdx + 1);
    }
}
