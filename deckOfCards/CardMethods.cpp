//
//  Shuffle.cpp
//  deckOfCards
//
//  Created by Jacob Wheeler on 8/28/19.
//  Copyright © 2019 Jacob Wheeler. All rights reserved.
//

#include "CardMethods.hpp"

// ShuffleDeck function
void ShuffleDeck(vector <Card>& deck){
    
    // Loop through deck
    for(int i = deck.size() - 1; i > 0; i--){
        
        // Pick a random card
        Card& randCard = deck[rand()%i];
        
        // Swap randCard & the indexed card
        Card swap = deck[i];
        deck[i] = randCard;
        randCard = swap;
    }
}


// isFlush function
bool isFlush(vector <Card> hand){
    
    // true if all cards are the same suit
    return(hand[0].suit == hand[1].suit && hand[1].suit == hand[2].suit && hand[2].suit == hand[3].suit && hand[3].suit == hand[4].suit);
}

// FindMin function
int FindMin(vector<Card> hand){
    
    // number = value of the first card
    int number = hand[0].value;
    
    // Loop through hand
    for(int i = 0; i < hand.size(); i++){
        
        // Set number = to value if it's larger
        if(number > hand[i].value){
            number = hand[i].value;
        }
    }
    return number;
}


// Compare function to use for sort
bool my_cmp( const Card& a, const Card& b){
    // smallest comes first
    return a.value < b.value;
}


// isStraight function
bool isStraight(vector <Card> hand){
    
    // Sort hand using my_cmp
    sort(hand.begin(), hand.end(), my_cmp);
    
    // return true if values are sequential
    return ((hand[0].value + 1) == hand[1].value && (hand[1].value + 1) == hand[2].value && (hand[2].value + 1) == hand[3].value && (hand[3].value + 1) == hand[4].value);
}


// isRoyalFlush function
bool isRoyalFlush(vector<Card> hand) {
    
    // return true if isStraightFlush and value @ index 0 = 10
    return (isStraightFlush(hand) && hand[0].value == 10);
}
