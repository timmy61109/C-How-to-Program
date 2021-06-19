#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

struct bitCard {
  unsigned int face : 4;
  unsigned int suit : 2;
};

typedef struct bitCard Card;

void fillDeck(Card * const wDeck);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void) {
  Card deck[CARDS];
  srand(time(NULL));
  fillDeck(deck);
  shuffle(deck);
  deal(deck);
}

void fillDeck(Card * const wDeck) {
  for (size_t i = 0; i < CARDS; ++i) {
    wDeck[i].face = i % (CARDS / 4);
    wDeck[i].suit = i / (CARDS / 4);
  }
}

void shuffle(Card * const wDeck) {
  for (size_t i = 0; i < CARDS; ++i) {
    size_t j = rand() % CARDS;
    Card temp = wDeck[i];
    wDeck[i] = wDeck[j];
    wDeck[j] = temp;
  }
}

void deal(const Card * const wDeck) {
  char face[13][10] = {
    "Ace", "Deuce", "Three", "Four",
    "Five", "Six", "Seven", "Eight",
    "Nine", "Ten", "Jack", "Queen", "King"
  };
  char suit[4][10] = {"Hearts", "Diamonds", "Clubs", "Spades"};

  printf("%-10s%-15s%-10s%-10s\n", "Suit", "Card", "Suit", "Card");
  for (size_t k1 = 0, k2 = k1 + 26; k1 < CARDS / 2; ++k1, ++k2) {
    printf("%-10s%-15s", suit[wDeck[k1].suit], face[wDeck[k1].face]);
    printf("%-10s%-10s\n", suit[wDeck[k2].suit], face[wDeck[k2].face]);
  }
}
