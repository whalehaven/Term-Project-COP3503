#include <cstdlib>
#include <ctime>
#include <climits>

int chooseComp = 0;
int numNoun = 1;
int numAdj = 0;
int numVerb = 1;
int numAdv = 0;

int main() {
cout << "GENERATING RANDOM SIMPLE SENTENCE...\n";
cout << "Would you like to control the components? \n1. Yes\n2. No\n";
cout << "Input: ";
cin >> chooseComp;

while (cin.fail() || chooseComp != 1 || chooseComp != 2) {
cin.clear();
cin.ignore(INT_MAX, '\n');
cout << "\nPlease input a valid number.";
cout << "\nWould you like to control the components? \n1. Yes\n2. No\n";
cout << "\nInput: ";
cin >> chooseComp;
}

switch(chooseComp) {

case '1':
{
cout << "Please enter the number of nouns (1-3): ";
cin >> numNoun;
while (cin.fail() || numNoun < 1 || numNoun > 3) {
cin.clear();
cin.ignore(INT_MAX, '\n');
cout << "\nPlease input a valid number (1-3): ";
cin >> numNoun;
}

cout << "Please enter the number of adjectives (0-3).\nThe number of adjectives cannot be greater than the number of subjects: ";
cin >> numAdj;
while (cin.fail() || numAdj < 0 || numAdj > 3 || numAdj > numNoun) {
cin.clear();
cin.ignore(INT_MAX, '\n');
cout << "\nPlease input a valid number (0-3): ";
cin >> numAdj;
}

cout << "Please enter the number of verbs (1-2): ";
cin >> numVerb;
while (cin.fail() || numVerb < 1 || numVerb > 2) {
cin.clear();
cin.ignore(INT_MAX, '\n');
cout << "\nPlease input a valid number (1-2): ";
cin >> numVerb;
}

cout << "Please enter the number of adverbs (0-2): ";
cin >> numAdv;
while (cin.fail() || numAdv < 0 || numAdv > 2 || numAdv > numVerb) {
cin.clear();
cin.ignore(INT_MAX, '\n');
cout << "\nPlease input a valid number (0-2): ";
cin >> numAdv;
}

createSentence(numNoun, numAdj, numVerb, numAdv);

case '2':
{
srand(time(NULL));
numNoun = (rand() % 3) + 1; //generates num 1-3
numAdj = (rand() % 4); //generates num 0-3
while (numAdj > numNoun) { //makes sure that the numAdj does not exceed numNoun
	numAdj = (rand() % 4);
}
numVerb = (rand() % 2) + 1; //generates num 1-2
numAdv = (rand() % 3); //generates num 0-2
while (numAdv > numVerb) { //ensures that numAdv is not greater than numVerb
	numAdv = (rand() % 3);
}
createSentence(numNoun, numAdj, numVerb, numAdv);
}


}
}





