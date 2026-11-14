#include "hitung_kata.h"

boolean isSame(Word w1, Word w2)
{
    if (w1.Length != w2.Length) return false;

    for (int i = 0; i < w1.Length; i++)
    {
        if (w1.TabWord[i] != w2.TabWord[i]) return false;
    }

    return true;
}

int hitungKemunculan(Word w)
{
    STARTWORD();

    int same = 0;

    while (!EndWord)
    {
        if (isSame(currentWord, w))
        {
            same++;
        }

        ADVWORD();
    }

    return same;
}