/*
*
*to be added to builder.cpp once finished
*
*/

createSentence(numNoun, numAdj, numVerb, numAdv) {
	//initializes counters for the parts of speech
	int nounCount = 0;
	int verbCount = 0;
	int adjCount = 0;
	int advCount = 0;
	//initializes the punctuations
	word *period= new word( "punct", "." );
	word *exclam= new word( "punct", "!" );
	word *quest= new word( "punct", "?" );
	
	ifPlural(); //calls bool method to determine if the sentence will use singular or plural nouns. 
	
	//randomly chooses if sentence will contain singular nouns or plural nouns 
	if (ifPlural) {
		//if plural, use "the" as the article preference
		word *articleCapThe = new word ("punct", "The");
		word *articleThe = new word ("punct", "the");
	}
	else { 
		//if singular, randomly select "the" or "a/an" as the article preference
		word *articleCap = new word ("punct", "A");
		word *article = new word ("punct", "a");
		word *articleCapAn = new word ("punct", "An");
		word *articleAn = new word ("punct", "an");
	}
	
	controller *randomList = new controller();
	word *currentword;
	word *currentNoun;
	if (numNoun == 1) {
		currentNoun = wordBank->findTypeOfWord( "noun" )->content;
		isVowel(currentNoun);
		if (isVowel(currentNoun) && !ifPlural) {
			randomList -> addWord(articleCapAn);
		}
		else if (!isVowel(currentNoun) && !ifPlural) {
			randomList -> addWord(articleCap);
		}
		else {
			randomList -> addWord(articleCapThe);
		}
		if (numAdj != 0) {
			currentword = wordBank->findTypeOfWord( "adjective" )->content;
			randomList -> addWord(currentword);
		}
		randomList -> addWord(currentNoun);
		
		for (int i = 0; i < numVerb; i++) {
			if (numAdv != 0) {
				currentword = wordBank->findTypeOfWord( "adverb" )->content;
				randomList -> addWord(currentword);
			}
				currentword = wordBank->findTypeOfWord( "verb" )->content;
				randomList -> addWord(currentword);
				verbCount++;
			if (numVerb == 2 && verbCount != 1) {
				currentword = wordBank->findTypeOfWord( "conjunction" )->content;
				randomList -> addWord(currentword);
			}
		}	
		randomList -> addWord(selectPunct(period, exclam, quest));

		//for verbs, use a for loop to list them all with conj . then increment verbCount
		//between every noun, include article, and a conjunction and increment nounCount
		//for every noun, check to see if it starts with a value. ***Ask Wills how to check the first letter of the word***
		//this will be in a while loop while (nNC != nN && nVC != nV)

	}
	if (numNoun == 2) {
		
		//same thing but order is:
		//articleCap, adjective, noun, adverb, verb, article, adjective, noun, punct.
	}
	
	if (numNoun == 3) {
		//same thing but order is:
		//articleCap, adjective, noun, conj, article, adjective, noun, adverb, verb, article, adjective, noun, punct.
		//OR
		//articleCap, adjective, noun, adverb, verb, article, adjective, noun, WITH, article, adjective, noun, punct.
	}
}



//randomly selects 1 or 2 to determine if the sentence will use singular or plural nouns. 
bool ifPlural () {
	int randomNumber = (rand() % 2) + 1; //generates num 1-2
	if (randomNumber == 1) {
		return false; //use singular nouns
	}
	else {
		return true; //use plural nouns
	}
}

//randomly selects 1, 2, or 3 to determine the punctuation of the sentence. 
word* selectPunct (word *period, word *exclam, word *quest) {
	int randomNumber = (rand() % 3) + 1; //generates num 1-3
	if (randomNumber == 1) {
		return period; //use period
	}
	else if (randomNumber == 2) {
		return exclam; //use exclamation point
	}
	else () {
		return quest; //use question mark
	}
}

//determines if the first letter of the noun starts with a vowel 
bool isVowel (word *word) {
	std::string wordcontent = word->content;
	std::string firstLetter = word.substring(0,0);
	switch (firstLetter) {
	case 'a':
	case 'e':
	case 'i':
	case 'o': 
	case 'u':
	return true;
	default:
	return false;
	}
}
