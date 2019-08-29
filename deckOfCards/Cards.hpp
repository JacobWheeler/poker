//
//  Cards.hpp
//  deckOfCards
//
//  Created by Jacob Wheeler on 8/27/19.
//  Copyright © 2019 Jacob Wheeler. All rights reserved.
//

#ifndef Cards_hpp
#define Cards_hpp
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

struct Card{
    int suit;
    int value;
};

vector <Card> CreateDeck ();
void PrintDeck(vector<Card> deck);


#endif /* Cards_hpp */
