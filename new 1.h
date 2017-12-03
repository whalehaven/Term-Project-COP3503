createSentence(numNoun, numAdj, numVerb, numAdv) {
	//initializes counters for the parts of speech
	int nounCount = 0;
	int verbCount = 0;
	//initializes the punctuations
	word *period= new word( "punct", "." );
	word *exclam= new word( "punct", "!" );
	word *quest= new word( "punct", "?" );
	
	//randomly chooses if sentence will contain singular nouns or plural nouns 
	if (ifPlural) {
		//if plural, use "the" as the article preference
		word *articleCap = new word ("punct", "The");
		word *article = new word ("punct", "the");
	}
	else { 
		//if singular, randomly select "the" or "a/an" as the article preference
		if(selectArt) {
			word *articleCap = new word ("punct", "The");
			word *article = new word ("punct", "the");
		}
		else {
			word *articleCap = new word ("punct", "A");
			word *article = new word ("punct", "a");
			word *articleCapAn = new word ("punct", "An");
			word *articleAn = new word ("punct", "an");
		}
	}
	
	controller *wordBank = new controller();	
	
	if (numNoun == 1) {
		//get random words by first generating a random number and then traversing through the list to get that word
		//then add words in this order: 
		//articleCap, adjective, noun, adverb, verb.
		//for adjectives, first code: if numAdj != 0, 
		//for adverbs, first code: if numAdv != 0,
		//for verbs, use a for loop to list them all with conj . then increment verbCount
		//between every noun, include article, and a conjunction and increment nounCount
		//for every noun, check to see if it starts with a value. ***Ask Wills how to check the first letter of the word***
		//this will be in a while loop while (nNC != nN && nVC != nV)

	}
	if (numNoun == 2) {
		//same thing but order is:
		//articleCap, adjective, noun, adverb, verb, article, adjective, noun
	}
	
	if (numNoun == 3) {
		//same thing but order is:
		//articleCap, adjective, noun, conj, article, adjective, noun, adverb, verb, article, adjective, noun
		//OR
		//articleCap, adjective, noun, adverb, verb, article, adjective, noun, WITH, article, adjective, noun
	}
}



//randomly selects 1 or 2 to determine if the sentence will use singular or plural nouns. 
bool ifPlural () {
	randomNumber = (rand() % 2) + 1; //generates num 1-2
	if (randomNumber == 1) {
		return false; //use singular nouns
	}
	else {
		return true; //use plural nouns
	}
}

//randomly selects 1 or 2 to determine the article preference in the case of singular nouns
bool selectArt () {
	randomNumber = (rand() % 2) + 1; //generates num 1-2
	if (randomNumber == 1) {
		return false; //use "a/an"
	}
	else {
		return true; //use "the" 
	}
}