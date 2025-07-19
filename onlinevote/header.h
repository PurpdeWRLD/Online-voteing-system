#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<string.h>
#include <ctype.h>

#define MAX_CAND 10 //Macro definition


//Structure of candidate
typedef struct Candidate
{
    char name[20];
    char symbol;
    int votes;
}Candidate;

typedef struct 
{
    Candidate all_candidate[MAX_CAND];
    int candidateCount;
}Cand;

//Global variable declarations
extern char symbol[10];
extern char symbolTaken[11];

//Main Functions prototype
void fillCandidate(int number, Cand *cand);
void displayCandidate(Cand *cand);
void getVotes(int voters, Cand *cand);
void getResult(Cand *cand);
#endif