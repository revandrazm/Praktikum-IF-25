#include "analisis_catatan.h"
#include "mesinkarakter.h"
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

void analisisCatatan(int *jmlKata, int *terpanjang, int *jmlPalindrom)
{
    char kata[51];
    *terpanjang = 0;
    *jmlPalindrom = 0;
    *jmlKata = 0;
    int panjang_sekarang = 0;
    int index = 0;

    START();

    while (EOP() == 0)
    {
        if (currentChar == ' ')
        {
            panjang_sekarang = 0;

            kata[index] = '\0';
            *jmlPalindrom += isPalindrom(kata, index);
            index = 0;

        } else
        {
            panjang_sekarang++;

            kata[index] = currentChar;
            index++;
        }

        if (panjang_sekarang > *terpanjang)
        {
            *terpanjang = panjang_sekarang;
        }

        ADV();
    }
    kata[index - 1] = '\0';
    *jmlPalindrom += isPalindrom(kata, index);
}