#include "listrec.h"
#include <stdio.h>

int rentetanTerpanjang(List l, int batas)
{
    if (isEmpty(l)) return 0;

    if (INFO(l) > batas)
    {
        return 1 + rentetanTerpanjang(NEXT(l), batas);
    }
}

int main()
{
    int n, batas, temp;
    scanf("%d %d", &n, &batas);

    List l = NIL;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        insertLast(&l, temp);
    }
    
    int revand = rentetanTerpanjang(l, batas);
    printf("%d\m", revand);

    return 0;
}