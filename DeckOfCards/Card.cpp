class Card {
    char suit = 's';
    char val = 'A';
public:
    Card(char suit = 's', char val = 'A') : suit(suit), val(val) {};
    ~Card();
    char suit() const { return suit; };
    char val() const { return val; };
    
    char* getCard() const { 
        char name[2] = { suit,val };
        return name; 
    };

    void setSuit(char newSuit) { suit = newSuit; }
    void setVal(char newVal) { val = newVal; }
};
