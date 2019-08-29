//
//  Cards.cpp
//  deckOfCards
//
//  Created by Jacob Wheeler on 8/27/19.
//  Copyright © 2019 Jacob Wheeler. All rights reserved.
//

#include "Cards.hpp"
vector <Card> deck;
vector <Card> CreateDeck () {
    //loop through suits
    for(int suit = 1; suit <= 4; suit++){
        //loop through numbers
        for(int value = 1; value <= 13; value++){
            // create a card
            Card card;
            //assign suit to card
            card.suit = suit;
            //assign value to card
            card.value = value;
            //push card into deck
        
            deck.push_back(card);
        }
    }
    return deck;
}
void PrintDeck(vector<Card> deck){
    for (Card card : deck){
        if(card.suit == 1){
            if(card.value == 1)
                cout << "Ace of Spades" << "\n";
            else if(card.value == 11)
                cout << "Jack of Spades" << "\n";
            else if(card.value == 12)
                cout << "Queen of Spades" << "\n";
            else if(card.value == 13)
                cout << "King of Spades" << "\n";
            else
                cout << card.value << " of Spades" << "\n";
        }else if(card.suit == 2){
                if(card.value == 1)
                    cout << "Ace of Clubs" << "\n";
                else if(card.value == 11)
                    cout << "Jack of Clubs" << "\n";
                else if(card.value == 12)
                    cout << "Queen of Clubs" << "\n";
                else if(card.value == 13)
                    cout << "King of Clubs" << "\n";
                else
                    cout << card.value << " of Clubs" << "\n";
        }else if(card.suit == 3){
                if(card.value == 1)
                    cout << "Ace of Hearts" << "\n";
                else if(card.value == 11)
                    cout << "Jack of Hearts" << "\n";
                else if(card.value == 12)
                    cout << "Queen of Hearts" << "\n";
                else if(card.value == 13)
                    cout << "King of Hearts" << "\n";
                else
                    cout << card.value << " of Hearts" << "\n";
        }else if(card.suit == 4){
                if(card.value == 1)
                    cout << "Ace of Diamonds" << "\n";
                else if(card.value == 11)
                    cout << "Jack of Diamonds" << "\n";
                else if(card.value == 12)
                    cout << "Queen of Diamonds" << "\n";
                else if(card.value == 13)
                    cout << "King of Diamonds" << "\n";
                else
                    cout << card.value << " of Diamonds" << "\n";
        }
    }
}

