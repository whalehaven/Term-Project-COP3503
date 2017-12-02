//
// Created by myraj on 12/2/2017.
//

#ifndef PROJECT_WORDSUBCLASSES_H
#define PROJECT_WORDSUBCLASSES_H

#include <string>

class Noun:public word{
public:
    Noun():word(typeOfName,content){}
    std::string makeNounPlural(string noun);
};

class ProperNoun:public word{
public:
    ProperNoun():word(typeOfName,content){}

};

class Verb:public word{
public:
    Verb():word(typeOfName,content){}
    std::string makeVerbPast(string verb);
    std::string makeVerbPastWithVowel(string verb);
};

class Adjective:public word{
public:
    Adjective():word(typeOfName,content){}
};

class Adverb:public word{
public:
    Adverb():word(typeOfName,content){}
};

class Conjunction:public word{
public:
    Conjunction():word(typeOfName,content){}
};

class Preposition:public word{
public:
    Preposition():word(typeOfName,content){}
};

class Article:public word{
public:
    Article():word(typeOfName,content){}
};

#endif //PROJECT_WORDSUBCLASSES_H
