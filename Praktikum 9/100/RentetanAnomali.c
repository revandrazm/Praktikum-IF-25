#include "listrec.h"

int revandra(List l, int *current_streak, int *max_streak, int batas)
{
    if (isEmpty(l)) return *max_streak;

    if (INFO(l) > batas)
    {
        (*current_streak)++;

        if (*max_streak < *current_streak)
        {
            *max_streak = *current_streak;
        }
    }
    else
    {
        *current_streak = 0;
    }

    return revandra(NEXT(l), current_streak, max_streak, batas);
}

int rentetanTerpanjang(List l, int batas)
{
    int current_streak = 0;
    int max_streak = 0;

    return revandra(l, &current_streak, &max_streak, batas);
}