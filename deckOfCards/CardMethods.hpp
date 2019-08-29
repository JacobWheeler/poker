//
//  Shuffle.hpp
//  deckOfCards
//
//  Created by Jacob Wheeler on 8/28/19.
//  Copyright © 2019 Jacob Wheeler. All rights reserved.
//

#ifndef Shuffle_hpp
#define Shuffle_hpp
#include <cstdlib>
#include <stdio.h>
#include "Cards.hpp"

void ShuffleDeck(vector <Card>& deck);
bool isFlush(vector <Card> hand);
bool isStraight(vector <Card> hand);
bool my_cmp( const Card& a, const Card& b);

#endif /* Shuffle_hpp */
