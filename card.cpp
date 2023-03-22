#include "card.h"

Card::Card(std::string rank, std::string suit) {
    this->rank = rank;
    this->suit = suit;
}

Card::~Card() {
    // no cleanup necessary
}

std::string Card::getRank() const {
    return rank;
}

std::string Card::getSuit() const {
    return suit;
}

std::string Card::toString() const {
    return rank + " of " + suit;
}