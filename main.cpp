#include "card.h"
#include "deck.h"
#include <iostream>

int main() {
    // Create a deck of cards
    Deck myDeck;

    // Shuffle the deck
    myDeck.shuffle();

    // Draw 10 cards and print each one
    for (int i = 0; i < 10; ++i) {
        Card* drawnCard = myDeck.draw();
        std::cout << "Card " << i + 1 << ": " << drawnCard->toString() << std::endl;       
    }

    // Reshuffle the deck
    myDeck.shuffle();
    std::cout << "Shuffling Deck" << std::endl;

    // Draw 10 cards and print each one
    for (int i = 0; i < 10; ++i) {
        Card* drawnCard = myDeck.draw();
        std::cout << "Card " << i + 11 << ": " << drawnCard->toString() << std::endl;
    }

    return 0;
}