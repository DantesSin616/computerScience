#include <stdio.h>


#DEFINE IN 1 // inside a word
#DEFINE OUT 0 // outside a word
#DEFINE MAX_WORD_COUNTING 20

// Print an histogram with bars in horizontal. (Vertical bars are way harder)
int main(){
  int c;
  int state = OUT; // starts inside a word
  int word_length = 0;
  int length[MAX_WORD_COUNTING + 1];

  for (int i = 0; i < MAX_WORD_COUNTING; i++){
    length[i] = 0;
  }

  while((c = getchar()) != EOF){

    // marking delimeter inside file

    if(c == ' ' || c == '\t' || c == '\n'){

      if (state == IN){
        length[]++;

      }
    }

  }
}
