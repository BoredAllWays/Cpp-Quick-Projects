#include <iostream>
#include <vector>

using std::cout;
using std::cin;


int main()
{
	unsigned int number_of_sides;
	const unsigned int polygon_total_degrees = 360;
	
	cout << "How many sides does your polygon have?\n";
	cin >> number_of_sides;

	if (number_of_sides == 0)
	{
		cout << "I can't find the central angle for this figure so i'll default it to 1\n";
		number_of_sides = 1;
	}
	cout << "The central angle measurement is " << polygon_total_degrees / number_of_sides << '\n';

	if (number_of_sides == 4)
	{
		cout << "It is a quadrilateral\n";
	}
	else if (number_of_sides == 3)
	{
		cout << "It is a triangle\n";
	}
	else if (number_of_sides == 0) 
	{
		cout << "It is a circle" << '\n';
	}
	else
	{
		cout << "Your figure is either a polygon greater then 4, a point, or a line\n";
	}
}

