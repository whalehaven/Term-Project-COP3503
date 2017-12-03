/*
 * comments here
 */

#include "WordSubclasses.h"
#include <iostream>
#include <string>

std::string Noun::makeNounPlural(std::string noun){
    noun += "s" ;
    return noun;
}

std::string Verb::makeVerbPast(std::string verb){
    verb += "ed" ;
    return verb;
}

std::string Verb::makeVerbPastWithVowel(std::string verb){
    verb += "d" ;
    return verb;
}
