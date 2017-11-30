#include "word.h"

word::word( std::string typeOfWord )
{
  this->typeOfWord = typeOfWord;
}

std::string
word::getTypeOfWord()
{
  return this->typeOfWord;
}

void
word::addWord( std::string typeOfWord, std::string content )
{
  wordList *n = new wordList();
  word *newWord = new word( typeOfWord, content );
  n->content = newWord->typeOfWord;
  
  if ( head == nullptr && tail == nullptr )
    {
      n->next = nullptr;
      head = n;
      tail = n;
    }

  else
    {
      tail->next = n;
      tail = n;
      tail->next = nullptr;
    }
}

int
main()
{}
  
