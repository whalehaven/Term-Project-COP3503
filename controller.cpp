/*
  This is the implementation for the class controller. All functions apart from the printing functions (toString and
  printSentence), each function takes a pointer to a word as its only parameter. Both addWord and deleteWord return
  an int. These functions return 1 if the operation was successful, and 0 if something went wrong. This can be helpful
  in debugging.
*/

#include "controller.h"
#include <iostream>

//implicit constructor for controller
controller::controller()
{
  head = nullptr;
  tail = nullptr;
}


int
controller::addWord( word *word )
{
  wordList *newItem = new wordList();

  //if the list is empty, use the newItem as the first and only item in the list
  if ( !head && !tail )
    {
      newItem->content = word;
      head = newItem;
      tail = newItem;
      return 1;
      
    }

  //if the list is not empty, add the newItem to the end of the list and make it the tail
  else
    {
      newItem->content = word;
      tail->next = newItem;
      tail = newItem;
      newItem->next = nullptr;
      return 1;
    }
  
  return 0;
}

int
controller::deleteWord( word *word )
{

  //searcher is set to the head of the list. searcherFollower will eventually point to the item behind searcher.
  wordList *searcher = head;
  wordList *searcherFollower = head;

  //if the list is empty, return 0 to indicate operation failure
  if ( !head && !tail )
    return 0;

  /* if the word passed to the function is equal to the first item in the list, delete it and make the second list item
     the new head */
  else if ( word == head->content )
    {
      wordList *temp = head;
      head = head->next;
      delete temp;
      return 1;
    }

  //if list is not empty, search for the word passed to the function and delete it. 
  if ( head && tail )
    {
      //this is where seacher is set to point to the item after searcherFollower.
      searcher = searcher->next;
      while ( searcher )
	{
	  if ( searcher->content == word )
	    {
	      searcherFollower->next = searcher->next;
	      delete searcher;
	      return 1;
	    }
	  searcher = searcher->next;
	  searcherFollower = searcherFollower->next;
	   
	}
    }
  return 0;
}

word*
controller::findWord( word *word )
{

  wordList *searcher = head;

  while ( searcher )
    {
      if ( searcher->content == word )
	{
	  return searcher->content;
	}
    }

  return nullptr;
  
}

void
controller::toString()
{
  wordList *n = head;

  if ( !head && !tail )
    std::cout << "{ empty list }" << std::endl;

  else
    {
      while ( n )
	{	 
	  std::cout << n->content->content << ": " << n->content->typeOfWord << std::endl;
	  n = n->next;
	}
     
    }
}

void
controller::printSentence()
{
  wordList *n = head;

  if ( !head && !tail )
    std::cout << "{ empty list }" << std::endl;

  else
    {
      while ( n )
	{	 
	  std::cout << n->content->content << " ";
	  n = n->next;
	}
      std::cout << std::endl;
    }
}

  

int
main()
{

  word *firstword = new word( "noun", "the cat" );
  word *secondword = new word( "verb", "drank" );
  word *thirdword = new word( "noun", "water" );

  controller *wordBank = new controller();
  
  wordBank->addWord( firstword );
  wordBank->addWord( secondword );
  wordBank->addWord( thirdword );

  std::cout << "--toString called--\n" << std::endl;
  wordBank->toString();
  std::cout << "\n--printSentence called--\n" << std::endl;
  wordBank->printSentence();

  wordBank->deleteWord( thirdword );
  std::cout << "\n--Deleting thirdword--" << std::endl;

  std::cout << "\n--toString called--\n" << std::endl;
  wordBank->toString();
  std::cout << "\n--printSentence called--\n" << std::endl;
  wordBank->printSentence();

  delete firstword;
  delete secondword;
  delete thirdword;
  
  

  
  
}

