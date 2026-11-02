#include "analisis_catatan.h"
#include "mesinkarakter.h"
#include <stdio.h>

void analisisCatatan(int *jmlKata, int *terpanjang, int *jmlPalindrom)
{
    *jmlKata = 0;
    *terpanjang = 0;
    *jmlPalindrom = 0;

    START();
    
    while (EOP() == 0)
    {
        while (EOP() == 0 && (currentChar == ' ' || currentChar == '\n'))
        {
            ADV();
        }

        char kata[MAX_KATA];
        int panjang = 0;

        while (EOP() == 0 && currentChar != ' ' && currentChar != '\n')
        {
            kata[panjang] = currentChar;
            panjang++;

            ADV();
        }

        if (panjang > 0)
        {
            (*jmlKata)++;

            if (panjang > *terpanjang)
            {
                *terpanjang = panjang;
            }

            if (isPalindrom(kata, panjang))
            {
                (*jmlPalindrom)++;
            }
        }
    }
}