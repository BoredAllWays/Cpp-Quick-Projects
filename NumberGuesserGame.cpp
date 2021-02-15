#include <iostream>
#define print(x) std::cout << x << '\n';
#include <string>
#include <stdlib.h>
#include <limits>
#include <time.h>


using std::cout;
using std::string;
using std::cin;


void RunGame(bool playgame) 
{
	srand(time(NULL));
	const int randomNum = rand() % 101;
	int guess, min = 0;
	int max = 100;
	while (playgame)
	{
		cout << "Guess a number between " << min << " and " << max << '\n';
		cin >> guess;

		if (guess < randomNum)
		{
			print("You're number is too low")
				min = guess;
		}
		else if (guess > randomNum)
		{
			print("You're number is too high")
				max = guess;
		}
		else if (guess == randomNum)
		{
			print("WHAT NO ONE GUESSES MY NUMBER EVER?????????? YOU HACKER")
				playgame = false;
		}
		else
			print("Bad Number")
	}
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void UserResponse() 
{
	string userMessage;

	print("What would you like to say to this robot")
		std::getline(cin, userMessage);
	cout << "You: " << userMessage << '\n';

	if (userMessage == "nothing")
	{
		cout << "Robot:" << " Phew time to get out of here\n";
		cout << "Runs back to mommy's home\n";
	}
	else
	{
		cout << "Robot: REMATCH RIGHT NOW\n";
		string rematch;
		std::getline(cin, rematch);
		if (rematch != "ok")
		{
			cout << "Robot: What are you chicken?\n";
		}
		else
		{
			cout << "Timer for a rematch\n";
			bool playgame = true;
			RunGame(playgame);

		}

	}
}

int main()
{
	bool playGame = true;
	RunGame(playGame);
	UserResponse();
}
