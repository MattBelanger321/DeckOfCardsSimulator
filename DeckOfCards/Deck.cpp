#include "Card.cpp"

/*
    Deck will refer to the cards currently in play, this may contain multiple sets of 52
*/

class Deck {
    int remaining;  //number of cards left to be dealt
    int size;   //number of cards in play
    int deckPtr;    //index of the next card to be dealt
    Card* cards;

    //private functions
    void populateCards(Card* cards);

    //Deck Constants
    const int DEFAULT_DECK_SIZE = 52;
public:

    Deck() {
        remaining = DEFAULT_DECK_SIZE;
        size = DEFAULT_DECK_SIZE;
        deckPtr = 0;

        cards = new Card[size];
        populateCards(cards);
    }; //default constructor

    Deck(int deckCount) {
        remaining = DEFAULT_DECK_SIZE * deckCount;
        size = DEFAULT_DECK_SIZE * deckCount;
        deckPtr = 0;

        cards = new Card[size];
        populateCards(cards);
    }; //multideck constructor
    
    void shuffleDeck(); //reorders cards that are left to be dealt
    const Card& dealCard(); //deals the card indicated by deckPtr and increments deckPtr

    void newDeck(); //creates a new deck with the default deck size number of cards
    void newDeck(int deckCount);  //creates a new deck with the (default deck size * deckCount) number of cards

    int remaining() const { return remaining; };
    int deckSize() const { return size; };

    const Card* deck() const { return cards; };
};

Deck::~Deck() {
    delete[] cards;
};

