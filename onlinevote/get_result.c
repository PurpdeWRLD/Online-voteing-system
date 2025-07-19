#include "header.h"

void getResult(Cand *cand)
{
    int maxvotes = 0;
    int winner = 0;
    int index = -1;
    int i;
    for(i = 0; i < cand -> candidateCount; i++)
    {
        if(cand -> all_candidate[i].votes > maxvotes)
        {
            maxvotes = cand -> all_candidate[i].votes;
            index = i;
        }
    }

    for(i = 0; i < cand -> candidateCount; i++)
    {
        if(cand -> all_candidate[i].votes == maxvotes)
        {
            winner++;
        }
    }
    printf("----------------------------------------------------------------\n");
    printf("%20s\n", "RESULT");
    printf("----------------------------------------------------------------\n");

    if(winner > 1)
    {
        printf("%20s\n", "There is a tie");
    }
    else if(index != -1)
    {
        printf("The winner is : %s\t Symbol: %c\t with '%d' votes\n", cand -> all_candidate[index].name, cand -> all_candidate[index].symbol, cand -> all_candidate[index].votes);
    }
    else
    {
        printf("No candidate has votes\n");
    }
}