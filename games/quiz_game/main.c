#include <stdio.h>
#include <ctype.h>


/*
   This program implements a quiz game where the user is asked multiple-choice
   questions about the C programming language. It presents questions and options
   to the user, accepts their guesses, and compares them against predefined
   correct answers. It then provides feedback on the correctness of each answer
   and calculates a final score based on the number of correct responses.
*/


int main()
{

  char questions[][100] = {
                             "1. What year did the C language debut?:",
                             "2. Who is credited with creating C?:",
                             "3.What is the predecessor of C?:"
                             };

  char options[][100] = { "A. 1969", "B. 1972", "C. 1975", "D. 1999",
                          "A. Dennis Ritchie", "B. Nikola Tesla", "C.John Carmack", "D. Doc Brown",
                          "A. Objective C", "B. B", "C. C++", "D. C#" 
                         };

  char answers[3]={'B', 'A', 'B'};
  
  int numberOfQuestions= sizeof(questions)/sizeof(questions[0]);
  char guess;
  int score;


  printf("QUIZ GAME\n");


  for(int i = 0; i < numberOfQuestions; i++){
    printf("**************\n");
      printf("%s\n", questions[i]);
          printf("**************\n");

for(int j= (i*4); j < (i*4) + 4; j++){
 printf("%s\n", options[j]);
}
   
printf("guess: ");
scanf(" %c", &guess);
printf("%c"); //clear the \n input buffer

guess = toupper(guess);

if(guess == answers[i])
{
printf("CORRECT!\n");
score++;
}
else
{
printf("WRONG!\n");
}

  }


  printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);

  return 0;
}