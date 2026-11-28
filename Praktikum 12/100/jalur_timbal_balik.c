#include "jalur_timbal_balik.h"

int countReciprocalNeighbors(Graph G, int x)
{
    if (searchNode(G, x) == NULL) return 0;

    AdrAdjNode adjX = TRAIL(searchNode(G, x));

    int count = 0;

    while (adjX != NULL)
    {
        if (searchEdge(G, x, SUCC_ID(adjX)) != NULL && searchEdge(G, SUCC_ID(adjX), x) != NULL)
        {
            count++;
        }

        adjX = NEXTSUCC(adjX);
    }

    return count;
}