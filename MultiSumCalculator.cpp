
//This is just a prototype and is not completly correct. Also sorry for the bad variable naming, I'll try to use snake_case after this.

#include <iostream>
using std::cout;
using std::string;
using std::cin;



int GivesNumberOfOperations()
{
	//declaring how many ops from user input
	unsigned int numberofops;
	cout << "How many operations will you do?\n";
	cin >> numberofops;
	bool ifopsiszero = numberofops <= 0;

	if (ifopsiszero)
	{
		cout << "The operation cant be zero or less!";
		return 0;
	}

	return numberofops;

}

void doCalculations(int numberofops)
{
	unsigned int doingop = 1;
	double firstnum, secondnum, sum = 0;
	string op;
	cout << "What will the first number be?\n";
	cin >> firstnum;
	cout << "What will the second number be\n";
	cin >> secondnum;

	while (doingop <= numberofops)
	{
		cout << "What operation would you like first?\n";
		cin >> op;
		if (op == "+" || op == "add")
			sum += (firstnum + secondnum);
		else if (op == "*" || op == "x" || op == "mulitply")
			sum += (firstnum * secondnum);
		else if (op == "/" || op == "divide")
			sum += (firstnum / secondnum);
		else if (op == "-" || op == "subtract")
			sum += (firstnum - secondnum);
		else
			cout << "Bad operator is used";

		doingop++;

	}
	cout << '\n';
	cout << "Your sum is " << sum << '\n';
}



int main()
{
	const unsigned int numberofops = GivesNumberOfOperations();

	doCalculations(numberofops);

	std::cin.get();

}
