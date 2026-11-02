#include "VokalJurnal.h"
#include "mesinkarakter.h"
#include <stdio.h>

int hitungVokal(void)
{
    START();

    int count = 0;

    while (EOP() == 0)
    {
        if (currentChar >= 'A' && currentChar <= 'Z')
        {
            currentChar = (currentChar - 'A' + 'a');
        }

        if (currentChar == 'a'
         || currentChar == 'i'
         || currentChar == 'u'
         || currentChar == 'e'
         || currentChar == 'o')
        {
            count++;
        }

        ADV();
    }

    return count;
}