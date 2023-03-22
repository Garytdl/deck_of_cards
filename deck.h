#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>
#include <stack>
#include <random>
#include <chrono>

class Deck {
public:
    Deck();
    ~Deck();
    void shuffle();
    Card* draw();
private:
    std::vector<Card*> deck;
    std::stack<Card*> shuffledDeck;
};

#endif // DECK_H
