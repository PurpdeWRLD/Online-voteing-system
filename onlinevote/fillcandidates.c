#include "header.h"

void fillCandidate(int number, Cand *cand) //Function Definition
{   
    int i;
    for(i = 0; i < MAX_CAND; i++)//Interate upto 10 times
    {
        if(symbolTaken[i] == 1)//If symbol is taken by previous candidate skip the iteration
        {
            continue;
        }
        printf("S.no. %d  %c\n", i + 1, symbol[i]);//Prints remaining iteration
    }
    int n = 0;
    printf("Enter the S.no of the corrresponding symbol for candidate %d: ", number + 1);//Read input from the user for the symbol usage
    scanf("%d", &n);
    if(n <= 0 || n > 10 || symbolTaken[n - 1] == 1)//Validate if n is out of bounds or takes previous candidate symbols
    {
        printf("Invalid Input Try again!!\n");
        n = 0;
        fillCandidate(number, cand);
    }
    else{
        symbolTaken[n - 1] = 1;//Set that symbol index as 1
        cand -> all_candidate[number].symbol = symbol[n - 1];//Assigning that symbol to that candidate in the structure
        printf("Enter the name of the Candidate: ");
        scanf("%s", cand -> all_candidate[number].name);//Entering the name of the candidate
        cand -> all_candidate[number].votes = 0;//Setting the votes to zero
    }
}