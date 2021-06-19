// Fig. 10.2: fig10_02.c
// Structure member operator and
// structure pointer operator
#include <stdio.h>

struct card {
  char *face;
  char *suit;
};

int main(void) {
  struct card aCard;

  aCard.face = (char*) "Ace";
  aCard.suit = (char*) "Spades";

  struct card *cardPtr = &aCard;

  printf("%s%s%s\n%s%s%s\n%s%s%s\n",
    aCard.face, "of", aCard.suit,
    cardPtr->face, "of", cardPtr->suit,
    (*cardPtr).face, "of", (*cardPtr).suit
  );
}
