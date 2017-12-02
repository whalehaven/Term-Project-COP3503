//
// Created by myraj on 12/2/2017.
//

#include "WordSubclasses.h"
#include <iostream>
#include <string>

std::string Noun::makeNounPlural(string noun){
    noun += "s" ;
    return noun;
}

std::string Verb::makeVerbPast(string verb){
    verb += "ed" ;
    return verb;
}

std::string Verb::makeVerbPastWithVowel(string verb){
    verb += "d" ;
    return verb;
}
