//Richard Blake
//Myra Kurosu Jalil
//Alexander Scardina
//Winton Liu
//Abbigail Halem
//Zachary Tsarnas
//Group Project
#include "builder.h"
#include "controller.h"
#include <iostream>

using namespace std;
const int GENERATE_SENTENCE = 1;
const int MAD_LIBS = 2;
const int KNOCK_KNOCK = 3;
const int EXIT = 4;

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
      cout << "\nPlease choose one of the following: ";
      cout << "\n1. Random mad libs";
      cout << "\n2. Pre-generated mad libs";
      cout << "\n\nChoice: ";
      cin >> choice;

      if (choice == 1) {
	//random mad libs
	}
			
      else if (choice == 2) {
	cout << "\nWelcome to the Mad Libs Game. Please select the corresponding integer to the categories below.";
	cout << "\n1. Holiday";
	cout << "\n2. UF";
	cout << "\n3. Mystery";
	cout << "\n\nChoice: ";
	int madchoice = 0;
	cin >> madchoice;

	string word1="";
	string word2="";
	string word3="";
	string word4="";
	string word5="";
	string word6="";

	if (madchoice == 1) {
	  cout << "\nPlease enter a place: ";
	  cin >> word1;
	  cout << "Please enter a noun: ";
	  cin >> word2;
	  cout << "Please enter a famous person(one word): ";
	  cin >> word3;
	  cout << "Please enter an adjective: ";
	  cin >> word4;
	  cout << "Please enter a noun: ";
	  cin >> word5;
	  cout << "Please enter another adjective: ";
	  cin >> word6;

	  cout << "\nYour Holiday Mad Lib";
	  cout << "\n--------------------";
	  cout << "\nIn the " << word1 << " we can build a " << word2;
	  cout << "\nThen pretend that he is " << word3;
	  cout << "\nHe'll say, \"Are you " << word4 << "?\"";
	  cout << "\nWe'll say, \"No man\"";
	  cout << "\nBut you can do the job, when you're in town";
	  cout << "\nLater on, we'll conspire";
	  cout << "\nAs we dream by the " << word5;
	  cout << "\nTo face unafraid, the plans that we've made";
	  cout << "\nWalking in a " << word6 << " wonderland\n";
        }

	else if (madchoice == 2){
          cout << "\nPlease enter an adjective: ";
	  cin >> word1;
	  cout << "Please enter a body part: ";
	  cin >> word2;
	  cout << "Please enter a large number: ";
	  cin >> word3;
	  cout << "Please enter a beverage: ";
	  cin >> word4;
	  cout << "Please enter an animal(plural): ";
	  cin >> word5;
	  cout << "Please enter a name: ";
	  cin >> word6;

          cout << "\nYour UF Mad Lib";
	  cout << "\n---------------";
	  cout << "\nDear prof Fuchs,"; 
	  cout << "\n\nI cannot make it to class this afternoon. I am very " << word1 << " and cannot stop";
	  cout << "\nscratching my " << word2 << " I have a fever of " << word3 << " degrees and the doctor ordered";
	  cout << "\nme to stay in bed and drink lots of " << word4 << ". Also, can I have a 2 day extension";
	  cout << "\non the essay about " << word5 << "? My dog ate it and now I have to start all over.";
	  cout << "\n\nBest wishes,";
	  cout << "\n" << word6 << "\n";
	}
	
        else if (madchoice == 3){
	  cout << "\nPlease enter a name: ";
	  cin >> word1;
	  cout << "Please enter another name: ";
	  cin >> word2;
	  cout << "Please enter an object: ";
	  cin >> word3;
	  cout << "Please enter a 3rd name: ";
	  cin >> word4;
	  cout << "Please enter an adjective: ";
	  cin >> word5;
	  cout << "Please enter a drink: ";
	  cin >> word6;

	  
	  cout << "\nYour Mystery Mad Lib";
	  cout << "\n--------------------";
	  cout << "\nHello. My name is Detective " << word1 << ". Supposedly, somebody stole the";
	  cout << "\ncookie from " << word2 << "'s " << word3 << ". So it now brings me to my first suspect.";
	  cout << "\nHis name is " << word4 << ". My proof is that he runs a shop down town called " << word4 << "'s";
	  cout << "\n" << word5 << " bottles of " << word6 << " ,was juggling supplies and stole the watermelon";
	  cout << "\nbecause he had an injured costumer.\n";
	}

	else if (madchoice > 3 || madchoice < 1){
          cout << "\nPlease enter a valid number";
	  cin >> madchoice;
	}
      }
	
      else if (choice > 2 || choice < 1) {
	cout << "\nPlease enter a valid number";
	cin >> choice;
      }
      break;

    case KNOCK_KNOCK:
      cout << "\nWelcome to the Knock Knock Joke. Please press enter to continue after each statement.";
      cin.ignore();
      cout << "\nKnock knock.";
      cin.ignore();
      cout << "\nWho's there?";
      cin.ignore();
      cout << "\nrandom word."; //noun
      cin.ignore();
      cout << "\nrandom word who?";
      cin.ignore();
      cout << "\nrandom word random word.\n"; //adj + noun
      break;
      break;
                
    case EXIT:
      break; //if the user selects 4, the while loop is stopped and the program ends
    }
  } while (choice != EXIT); //the loop stops when the user selects 4
  return 0;
}

//a menu function is created to display the menu that the user sees
int menu() {
  cout << "\nMenu: ";
  cout << "\n1. Generate random sentence";
  cout << "\n2. Mad libs mode";
  cout << "\n3. Knock knock joke";
  cout << "\n4. Exit";
  cout << "\n\nChoice: ";
    
  int input = 0; //an int is created to store the user's input
  cin >> input;
    
  //this while loop checks to see if the user input is valid
  //if the input is invalid, the input is cleared and the user is asked to give input again
  while (cin.fail() || input < 1 || input > 4) {
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "\nPlease enter a valid number (1-4).";
    cout << "\nChoice: ";
    cin >> input;
  }
  return input; //the int 'input' is returned
}
