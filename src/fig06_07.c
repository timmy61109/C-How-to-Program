// Fig. 6.7: fig06_07.c
// Analyzing a student poll.
#include <stdio.h>
#define RESPONSES_SZIE 40
#define FREQUENCY_SZIE 11

// function main begins program execution
int main(int argc, char const *argv[]) {
  // initialize frequency counters to 0
  int frequency[FREQUENCY_SZIE] = {0};

  // place the survey responses in the responses array
  int responses[RESPONSES_SZIE] = {
    1, 2, 6, 4, 8, 6, 9, 7, 8, 10,
    1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
    5, 6, 7, 5, 6, 4, 8, 6, 8, 10
  };

  // for each answer, select value of an element of array responses
  // and use that value as an index in array frequency to
  // determine element to increment
  for (size_t answer = 0; answer < RESPONSES_SZIE; ++answer) {
    ++frequency[responses[answer]];
  }

  // display results
  printf("%s%17s\n", "Rating", "Frequency");

  // output the frequencies in a tabular format
  for (size_t rating = 0; rating < FREQUENCY_SZIE; ++rating) {
    printf("%6lu%17d\n", rating, frequency[rating]);
  }

}
