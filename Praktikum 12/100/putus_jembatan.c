#include "putus_jembatan.h"

void deleteEdge(Graph *g, int prec, int succ)
{
    AdrNode p = searchNode(*g, prec);

    AdrAdjNode q = TRAIL(p);

    if (SUCC_ID(q) == succ)
    {
        AdrAdjNode r = NEXTSUCC(q);
        NPRED(searchNode(*g, SUCC_ID(q)))--;
        deallocAdjNode(q);
        
        TRAIL(p) = r;
    }
    else
    {
        while (SUCC_ID(NEXTSUCC(q)) != succ)
        {
            q = NEXTSUCC(q);
        }

        AdrAdjNode r = NEXTSUCC(q);
        NEXTSUCC(q) = NEXTSUCC(NEXTSUCC(q));
        NPRED(searchNode(*g, SUCC_ID(r)))--;
        deallocAdjNode(r);
    }

    
}