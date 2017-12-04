/*
*
To be added to builder.cpp once finished 
*
*/

//initializes important variables
int chooseComp = 2;
int sentType = 1;
int numNoun = 1;
int numAdj = 0;
int numVerb = 1;
int numAdv = 0;

//asks user if they would like to set up the number of nouns/ verbs in the sentence
cout << "Would you like to set the number of components? \n1. Yes\n2. No\n";
cout << "Input: ";
cin >> chooseComp;

//checks validity of chooseComp
while (cin.fail() || chooseComp != 1 || chooseComp != 2) {
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	cout << "\nPlease input a valid number.";
	cout << "\nWould you like to control the components? \n1. Yes\n2. No\n";
	cout << "\nInput: ";
	cin >> chooseComp;
}

switch (chooseComp) {
	//if user wants to set components
	case '1': { 
		//asks user if they want adjectives or adverbs
		cout << "Do you want a basic sentence (1) or a colorful sentence (2)? ";
		cin >> sentType;
		//checks input validity
		while (cin.fail() || sentType != 1 || numNoun != 2) {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "\nPlease input a valid number (1-2): ";
			cin >> sentType;
		}
		
		//asks user for number of nouns
		cout << "Please enter the number of nouns (1-3): ";
		cin >> numNoun;
		//checks input validity
		while (cin.fail() || numNoun < 1 || numNoun > 3) {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "\nPlease input a valid number (1-3): ";
			cin >> numNoun;
		}
		//if colorful sentence, set numAdj equal to numNouns.
		if (sentType == 2) {
			numAdj = numNoun;
		}
		
		//asks user for number of verbs
		cout << "Please enter the number of verbs (1-2): ";
		cin >> numVerb;
		//checks input validty
		while (cin.fail() || numVerb != 1 || numVerb != 2) {
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "\nPlease input a valid number (1-2): ";
			cin >> numVerb;
		}
		//if colorful sentence, set numAdv equal to numVerb.
		if (sentType == 2) {
		numAdv = numVerb;
		}

		createSentence(numNoun, numAdj, numVerb, numAdv); //generate sentence based on num of components	
	
	//if user wants to randomize number of components
	case '2': {	
		srand(time(NULL));
		numNoun = (rand() % 3) + 1; //generates num 1-3
		numAdj = numNoun;
		numVerb = (rand() % 2) + 1; //generates num 1-2
		numAdv = numVerb;
		createSentence(numNoun, numAdj, numVerb, numAdv); //generates sentence based on num of components
	}
}




