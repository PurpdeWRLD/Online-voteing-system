#include "header.h"
#include <stdio.h>
#include <string.h>
//Value is defined for global variables
char symbol[10] = {'!', '@', '#', '$', '%', '^', '&', '*', '+', '-'};
char symbolTaken[11];

int main()
{
    int i;
    int candidate_count  = 0;
    Cand cand;
    while(1)
    {
        printf("Enter the candidates form 1 - %d: ", MAX_CAND);//Read no of candidates from the user
        scanf("%d", &candidate_count);
        if(candidate_count > MAX_CAND)
        {
            printf("Candidate count is too high\n");//If exceeding the limit of max candidates again read input from the user
        }
        else if(!(candidate_count >= 0 && candidate_count <= 10))
        {
            printf("Invalid input\n");//If the input is not a digit again read input from the user
        }
        else
        {
            break;//If successful break out of the loop
        }   
    }
    cand.candidateCount = candidate_count;//Saving the value in structure

    for(i = 0; i < candidate_count; i++)
    {
        fillCandidate(i, &cand);//Function call
    }
    displayCandidate(&cand);//Function call
    
    int voters_list;
    printf("Enetr the number of voters: ");
    scanf("%d", &voters_list);
    for(i = 0; i < voters_list; i++)
    {
        getVotes(i, &cand);
    }
    getResult(&cand);
    return 0;
}