// Make a standard deck of 52 cards (no Jokers). Shuffle the deck, and draw two cards at random. Display the two cards.
#include <iostream>
#include <string>

std::string suit[4] = {"Hearts","Spades","Clubs","Diamonds"};
std::string rank[13] = {"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
std::string card[52] = {};


int main()
{
    int cardNum = 0;
    for(int i=0; i<4; i++) {
        for(int j=0; j<13; j++) {
            card[cardNum]=rank[j]+" of "+suit[i];
            cardNum++;
        }
    }
    for(int i=0; i<52; i++) {
        std::cout<<card[i]<<std::endl;
    }
    
    //TODO shuffle
    
    return 0;
}