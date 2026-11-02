#include "KataTerpanjang.h"
#include <stdio.h>

int panjangKataTerpanjang(void)
{
    START();

    int terpanjang = 0;
    int panjang_sekarang = 0;

    while (EOP() == 0)
    {
        if (currentChar == ' ')
        {
            panjang_sekarang = 0;
        } else
        {
            panjang_sekarang++;
        }

        if (panjang_sekarang > terpanjang)
        {
            terpanjang = panjang_sekarang;
        }

        ADV();
    }

    return terpanjang;
}