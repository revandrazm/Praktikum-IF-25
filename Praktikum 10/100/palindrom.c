#include "palindrom.h"

boolean isPalindrom(Word word)
{
    for (int i = 0; i < word.Length; i++)
    {
        if (word.TabWord[i] != word.TabWord[word.Length - i - 1])
        {
            return false;
        }
    }

    return true;
}

void palindromTerpanjang(void)
{
    int jumlah_palindrom = 0;
    int panjang_terpanjang = 0;
    boolean ada_terpanjang = false;
    Word terpanjang;

    STARTWORD();

    while (!EndWord)
    {
        if (isPalindrom(currentWord))
        {
            ada_terpanjang = true;
            jumlah_palindrom++;

            if (currentWord.Length > panjang_terpanjang)
            {
                panjang_terpanjang = currentWord.Length;
                
                terpanjang = currentWord;
            }
        }

        ADVWORD();
    }

    printf("%d", jumlah_palindrom);
    if (ada_terpanjang)
    {
        printf(" ");
        for (int i = 0; i < terpanjang.Length; i++)
        {
            printf("%c", terpanjang.TabWord[i]);
        }
    }

    printf("\n");
}