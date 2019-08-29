//
//  Shuffle.cpp
//  deckOfCards
//
//  Created by Jacob Wheeler & Gabe Cerritos on 8/28/19.
//  Copyright © 2019 Jacob Wheeler & Gabe Cerritos. All rights reserved.
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

//Our own sort function
void selectionSort (vector <Card>& hand){
    
    //Variables
    int min;
    
    for(int i = 0; i < hand.size()-1; i++){
        min = i;
        for(int j = i+1; j < hand.size(); j++){
            if(hand[j].value < hand[min].value){
                min = j;
            }
        }
        swap(hand[min], hand[i]);
    }
    
}


// isStraight function
bool isStraight(vector <Card> hand){
    
    // Sort hand using my_cmp
    //sort(hand.begin(), hand.end(), my_cmp);
    
    //Select sort
    selectionSort(hand);
    
    // return true if values are sequential
    return ((hand[0].value + 1) == hand[1].value && (hand[1].value + 1) == hand[2].value && (hand[2].value + 1) == hand[3].value && (hand[3].value + 1) == hand[4].value);
}


// isStraightFlush function
bool isStraightFlush(vector <Card> hand){
    
    //check if it is a straight and if it is a flush
    return(isStraight(hand) && isFlush(hand));
}


// isRoyalFlush function
bool isRoyalFlush(vector<Card> hand){
    //Check to see if it is a straight flush and if the lowest card is 10 it's a royal flush
    return(isStraightFlush(hand) && hand[0].value == 10);
}


// isThreeOfAKind function
bool isThreeOfAKind(vector<Card> hand){
    
    //sort hand to be in order by value
    sort(hand.begin(), hand.end(), my_cmp);
    
    // Check if indexes 0, 1, 2 are equal or if 2, 3, 4 are equal & return
     return ((hand[0].value == hand[1].value && hand[1].value == hand[2].value) || (hand[2].value == hand[3].value && hand[3].value == hand[4].value));
}


// isFullHouse function
bool isFullHouse (vector<Card> hand) {
    
    // Sort hand using my_cmp
    sort(hand.begin(), hand.end(), my_cmp);
    
    // Check if indexes 0 and 1 are equal or if 3 and 4 are equal & return
    return ((hand[0].value == hand[1].value || hand[3].value == hand[4].value) && isThreeOfAKind(hand));
}
