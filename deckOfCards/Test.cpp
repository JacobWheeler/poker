//
//  Test.cpp
//  deckOfCards
//
//  Created by Jacob Wheeler on 8/29/19.
//  Copyright © 2019 Jacob Wheeler. All rights reserved.
//

#include "Test.hpp"
#include "CardMethods.hpp"

//test if it is a flush
vector <Card> handTest = {{1,1},{3,2},{10,2},{11,1},{13,3}};
void testFlushes(vector <Card> handTest){
    isFlush(handTest);
}
