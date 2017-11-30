#ifndef WORD_H_
#define WORD_H_
#include <string>

struct wordList
{
  word content;
  wordList *next;
};


class word
{
 public:
  //wordList members
  wordList *head;
  wordList *tail;

  //word member variables
  std::string typeOfWord;
  std::string content;

  //word member functions
  std::string getTypeOfWord();
  word( std::string typeOfWord, std::string content );
  void addWord( std::string typeOfWord, std::string content );
  void removeWord();
  std::string findWord();

};



#endif // WORD_H_
