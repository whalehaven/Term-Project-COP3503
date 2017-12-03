/*
 * comments here
 */

#ifndef PROJECT_WORDSUBCLASSES_H
#define PROJECT_WORDSUBCLASSES_H

#include <string>
#include "word.h"

class Noun:public word{
public:
    Noun(std::string typeOfWord,std::string content):word(typeOfWord,content){}
    std::string makeNounPlural(std::string noun);
};

class Verb:public word{
public:
    Verb(std::string typeOfWord,std::string content):word(typeOfWord,content){}
    std::string makeVerbPast(std::string verb);
    std::string makeVerbPastWithVowel(std::string verb);
};

class Adjective:public word{
public:
    Adjective(std::string typeOfWord,std::string content):word(typeOfWord,content){}
};

class Adverb:public word{
public:
    Adverb(std::string typeOfWord,std::string content):word(typeOfWord,content){}
};

class Conjunction:public word{
public:
    Conjunction(std::string typeOfWord,std::string content):word(typeOfWord,content){}
};

class Preposition:public word{
public:
    Preposition(std::string typeOfWord,std::string content):word(typeOfWord,content){}
};

#endif //PROJECT_WORDSUBCLASSES_H
