#include "deck.h"
#include <algorithm>

Deck::Deck() {
    std::string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
    std::string suits[] = { "Clubs", "Diamonds", "Hearts", "Spades" };
    for (std::string suit : suits) {
        for (std::string rank : ranks) {
            Card* newCard = new Card(rank, suit);
            deck.push_back(newCard);
        }
    }
}

Deck::~Deck() {
    for (Card* cardPtr : deck) {
        delete cardPtr;
    }
}

void Deck::shuffle() {
    std::default_random_engine g(std::chrono::system_clock::now().time_since_epoch().count());
    shuffledDeck = std::stack<Card*>();
    std::shuffle(deck.begin(), deck.end(), g);
    for (Card* cardPtr : deck) {
        shuffledDeck.push(cardPtr);
    }
}

Card* Deck::draw() {
    if (shuffledDeck.empty()) {
        shuffle();
    }
    Card* drawnCard = shuffledDeck.top();
    shuffledDeck.pop();
    return drawnCard;
}
