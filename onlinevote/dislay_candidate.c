#include "header.h"

void displayCandidate(Cand *cand)
{
    int i;
    printf("%-1s %20s %20s\n", "S.no", "Candidate name", "Symbol");
    for(i = 0; i < cand -> candidateCount; i++)
    {
        printf("%-1d. %20s  %20c\n", i + 1, cand -> all_candidate[i].name, cand -> all_candidate[i].symbol);//Display each Candidate
    }
}