#include<iostream>
#include<string>

using namespace std;
int findConsonantsInString(string);
int findVowelsInString(string);

int main()
{
	int choice;
	do {
		
		cout << "Welcome to the program\nThis program will identify the number of consonants and vowels in a provided string.\n";
		cout << "what do you want to do?\n1 for consonants\n2 for vowels\n3 for both consonants and vowels\n";
		cin >> choice;
		cin.ignore();
		if ((choice < 1) || (choice > 3))
		{
			cout << "you have entered an invalid choice, please re-enter your choice\n";
			system("pause");
		}
		system("cls");
	} while ((choice < 1) || (choice > 3));


	string words;
	cout << "Please enter a string.\n";
	//cin.ignore();
	getline(cin, words);

	switch (choice)
	{
		case 1:
		{
			cout << "number of consonants are " << findConsonantsInString(words) << endl;
			break;
		}
		case 2:
		{
			cout << "number of vowels are " << findVowelsInString(words) << endl;
			break;
		}
		case 3:
		{
			cout << "number of vowels are " << findVowelsInString(words) << endl;
			cout << "number of consonants are " << findConsonantsInString(words) << endl;
			break;
		}
	}	
	system("pause");
	return 0;
}

int findConsonantsInString(string words)
{
	int i=0;
	int count = 0;
	for (int i = 0; i < words.length(); i++)
	{
		if (((words[i] < 123) && (words[i] > 97)) || ((words[i] < 91) && (words[i] > 65)))
		{
			if ((words[i] != 69) && (words[i] != 73) && (words[i] != 79) && (words[i] != 85) &&
				(words[i] != 101) && (words[i] != 105) && (words[i] != 111) && (words[i] != 118)) 
			{
				count++;
			}
		}
	}
	return count;
}

int findVowelsInString(string words)
{
	int i = 0;
	int count = 0;
	for (int i = 0; i < words.length(); i++)
	{
		if ((words[i] == 65)||(words[i] == 69) || (words[i] == 73) || (words[i] == 79) || (words[i] == 85) ||
			(words[i] == 97)||(words[i] == 101) || (words[i] == 105) || (words[i] == 111) || (words[i] == 118))
		{
			count++;
		}
	}
	return count;
}