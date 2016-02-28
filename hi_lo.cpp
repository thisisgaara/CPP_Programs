// hi_lo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

#define MIN 0
#define MAX 100

#define True 1

int random_number(int seed)
{
	std::srand(seed);
	return (MIN + (std::rand() % (int)(MAX - MIN + 1)));
}

int play_game(int number)
{
	int user_tries = 1;
	int user_number;
	cout << "Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is." << endl;
	while (user_tries <= 7)
	{
		cout << "Guess #" << user_tries << " ";
		cin >> user_number;
		if (number < user_number)
		{
			cout << "Your guess is too high." << endl;
		}
		else if (number > user_number)
		{
			cout << "Your guess is too low." << endl;
		}
		else
		{
			cout << "Correct! You win!" << endl;
			return 0;

		}
		user_tries++;
	}
	cout << "Sorry, you lose.  The correct number was " << number << endl;
	return 1;
}
int main()
{
	char user_response = 'y';
	int number = random_number(time(0));
	while (True)
	{
		if (user_response == 'y')
		{
			play_game(number);
		}
		else if (user_response == 'n')
		{
			cout << "Thank you for playing";
			return 0;
		}
		cout << "Would you like to play again (y/n)?" << endl;
		cin >> user_response;
	}
	return 0;
}
int _tmain(int argc, _TCHAR* argv[])
{
	main();
	return 0;
}

