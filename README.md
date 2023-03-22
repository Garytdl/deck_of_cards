# deck_of_cards
C++ Playing Card Deck
The constructor will create a full 52-card deck of cards.  2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace for each suit: Clubs, Diamonds, Hearts, Spades.  Each card will be created on the heap and the deck will be stored using an STL vector of Card pointers. 
The destructor will free the memory associated with each Card instance. 
A shuffle method will shuffle the Card pointers into an STL stack. Note that only the pointers will be added to the stack.  Shuffle may be called at any time to "reshuffle".  Reshuffling clears the stack and repopulates with the full deck. 
A draw method will allow the caller to receive a pointer to the Card on the top of the shuffled deck.  The Card will be popped from the stack. 


    Creates a deck of cards.
    Shuffles the deck.
    Draws 10 cards and prints each one.
    Reshuffles the deck.
    Draws 10 cards and prints each one.
