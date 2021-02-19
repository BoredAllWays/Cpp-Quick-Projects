#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#define print(x) std::cout << x << '\n'

using std::cout;
using std::cin;
using std::string;
string question_answer;



int main()
{
	std::vector<string> lol = {};
	
	cout << "What is your dogs name, age, and size\n";
	getline(cin, question_answer);
	std::stringstream s_stream(question_answer);
	
	while (s_stream.good())
	{
		string new_string;
		getline(s_stream, new_string, ',');
		new_string.erase(remove(new_string.begin(), new_string.end(), ' '), new_string.end());
		lol.push_back(new_string);
	}

	for (int i = 0; i < lol.size(); i++)
		cout << i << " " << lol[i] << '\n';
	
}
