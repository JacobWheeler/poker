//
//  Shuffle.cpp
//  deckOfCards
//
//  Created by Jacob Wheeler on 8/28/19.
//  Copyright © 2019 Jacob Wheeler. All rights reserved.
//

#include "CardMethods.hpp"


void ShuffleDeck(vector <Card>& deck){
    for(int i = deck.size() - 1; i > 0; i--){
        Card& randCard = deck[rand()%i];
        Card swap = deck[i];
        deck[i] = randCard;
        randCard = swap;
    }
}

bool isFlush(vector <Card> hand){
    return(hand[0].suit == hand[1].suit && hand[1].suit == hand[2].suit && hand[2].suit == hand[3].suit && hand[3].suit == hand[4].suit);
}
int FindMin(vector<Card> hand){
    int number = hand[0].value;
    for(int i = 0; i < hand.size(); i++){
        if(number > hand[i].value){
            number = hand[i].value;
        }
    }
    return number;
}
bool my_cmp( const Card& a, const Card& b){
    // smallest comes first
    return a.value < b.value;
}
bool isStraight(vector <Card> hand){
    sort(hand.begin(), hand.end(), my_cmp);
    return((hand[0].value + 1) == hand[1].value && (hand[1].value + 1) == hand[2].value && (hand[2].value + 1) == hand[3].value && (hand[3].value + 1) == hand[4].value);
}
// Compare function to use for sort



    
