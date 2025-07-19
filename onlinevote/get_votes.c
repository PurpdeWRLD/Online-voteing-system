#include "header.h"

void getVotes(int votes, Cand *cand)//Function definition
{
    int value;
    displayCandidate(cand);//Function call for displaying candidate once
    printf("Voter %d Enter your vote from(1 - %d): ", votes + 1, cand -> candidateCount);
    scanf("%d", &value);

    //Validations
    if(value >= 1 && value <= cand -> candidateCount)
    {
        cand -> all_candidate[value - 1].votes++;
    }
    else
    {
        printf("Invalid choice. Please enter a number between 1 and %d.\n", cand -> candidateCount);
        getVotes(votes, cand);
    }
}