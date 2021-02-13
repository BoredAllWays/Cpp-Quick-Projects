#include <iostream>
#include <array>
using std::cout;
using std::string;
using std::cin;
using std::endl;


int main()
{
    string Food[4] = {"penguin", "Polar Bear", "Narwhal", "Fish"};
	int len = sizeof(Food) / sizeof(*Food);


	int input = 0;

	cout << "select a number between 0 and " << len-1 << " and it will become an animal!\n";
	cin >> input;
	if (input > 3)
	{
		cout << "That number should not be used DUMBO";
		return 0;
	}
	cout << "Your animal is a " << Food[input] << '\n';

	cin.get();

}
