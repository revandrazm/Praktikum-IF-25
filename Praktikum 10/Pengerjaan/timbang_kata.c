#include "timbang_kata.h"
#include "mesinkata.h"
#include <stdio.h>

void timbang(void)
{
    STARTWORD();
    boolean kanan = false;
    int kata_kiri = 0;
    int kata_kanan = 0;

    while (!EndWord)
    {
        if (currentWord.Length == 1 && currentWord.TabWord[0] == '@')
        {
            kanan = true;
        }
        else
        {
            if (kanan)
            {
                kata_kanan++;
            }
            else
            {
                kata_kiri++;
            }
        }

        ADVWORD();
    }

    if (kata_kanan > kata_kiri)
    {
        printf("KANAN\n");
    }
    else if (kata_kiri > kata_kanan)
    {
        printf("KIRI\n");
    }
    else
    {
        printf("SEIMBANG\n");
    }
}