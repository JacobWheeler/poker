//
//  main.cpp
//  deckOfCards
//
//  Created by Jacob Wheeler & Gabe Cerritos on 8/27/19.
//  Copyright © 2019 Jacob Wheeler & Gabe Cerritos. All rights reserved.
//

#include "Cards.hpp"
#include "CardMethods.hpp"
#include <ctime>

int main(int argc, const char * argv[]) {
    
    srand(time(nullptr)); // use current time as seed for random generator
    
    vector <Card> deck = CreateDeck();
    PrintDeck(deck);
    ShuffleDeck(deck);
    cout << endl;
    PrintDeck(deck);
    
    // Pull first five cards of shuffled deck
    vector <Card> hand;
    
    for(int i = 0; i < 5; i++){
        hand.push_back(deck[i]);
        cout << hand[i].value;
    }
    
    cout << endl << isFlush(hand);
    cout << endl << "Straight: " << isStraight(hand);
    cout << endl << "Straight Flush: " << isStraightFlush(hand);
    cout << endl << "Royal Flush: " << isRoyalFlush(hand);
    
    
    //Testing out sort function
    /*vector <int> numbers = {8,4,3,5,3,7,9};
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < numbers.size(); i++)
        cout << numbers[i] << " ";*/
    //Sort function working for cards
    //sort(hand.begin(), hand.end(), my_cmp);
    selectionSort(hand);
    
    for(int i = 0; i < hand.size(); i++)
        cout << endl << hand[i].value << " " << hand[i].suit;
    
    return 0;
}
