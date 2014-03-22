// Words
// Word analysis program.
//

#include <conio.h>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Global Variables
//  No Globals	


class myWordsLoad
{
public:
	void mainLine(char * myChars);

private:
	char * arrayCharacters;
	int cnt;
	void readDataFile(void);
	void countLetters(void);
	int makeWords(void);

};

int countLetters(char *);
int makeWords(char *);

int main()
{
	char myString1[200];
	char myString2[200];

	int num;

	strcpy(myString1,"This is my data.");
	strcpy(myString2,"The time is right for you to count all words in this variable. Let me know what you get when answering all Carters questions.");

	// Name the object mw1 and run mainLine.
	myWordsLoad mwl;
	mwl.mainLine(myString1);

	myWordsLoad mw2;
	mw2.mainLine(myString2);

	system("pause");
	return  0;

}


void myWordsLoad::mainLine(char * myChars)
{

	arrayCharacters = myChars;

	countLetters();

}

void myWordsLoad::countLetters(void)
{
	cnt = 0;

	while (arrayCharacters[cnt] != '\0')
	{
		
		cout << arrayCharacters[cnt] << endl;

		cnt = cnt + 1;
	}

	return;

}