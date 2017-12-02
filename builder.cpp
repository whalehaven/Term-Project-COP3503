//Richard Blake
//Myra Kurosu Jalil
//Alexander Scardina
//Winton Liu
//Abigail Halem
//Zachary Tsarnas
//Group Project
#include "builder.h"
#include "controller.h"
#include <iostream>

using namespace std;
const int GENERATE_SENTENCE = 1;
const int MAD_LIBS = 2;
const int EXIT = 3;

int main() {
  int choice = 0; //an int is created to store the value of the menu function
  do { //a do-while loop is created to run the menu function on loop
    choice = menu(); //the choice int stores the value of the menu function
    switch(choice) { //a switch statement is generated that uses the int choice
    case GENERATE_SENTENCE:
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
	break;
      }
  
    case MAD_LIBS:
      //mad libs game
      break;
                
    case EXIT:
      break; //if the user selects 3, the while loop is stopped and the program ends
    }
  } while (choice != EXIT); //the loop stops when the user selects 3
  return 0;
}

//a menu function is created to display the menu that the user sees
int menu() {
  cout << "\nMenu: ";
  cout << "\n1. Generate random sentence";
  cout << "\n2. Mad libs mode";
  cout << "\n3. Exit";
  cout << "\n\nChoice: ";
    
  int input = 0; //an int is created to store the user's input
  cin >> input;
    
  //this while loop checks to see if the user input is valid
  //if the input is invalid, the input is cleared and the user is asked to give input again
  while (cin.fail() || input < 1 || input > 3) {
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "\nPlease enter a valid number (1-3).";
    cout << "\nChoice: ";
    cin >> input;
  }
  return input; //the int 'input' is returned
}
