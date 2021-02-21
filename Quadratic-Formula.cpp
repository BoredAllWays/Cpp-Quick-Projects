#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::cin;


// -b+-sqrt b^2-4ac/2a;


int main()
{
    double a, b, c, negative_b, inside_square_rooted_numbers, square_rooted_number, two_a, first_solution, second_solution;

    cout << "What is the number before x^2? ";
    cin >> a;
    cout << "What is the number before x? ";
    cin >> b;
    cout << "What is the number without any variables? ";
    cin >> c;
    
    negative_b = -b;
    inside_square_rooted_numbers = pow(b, 2) - (4 * a * c);
    square_rooted_number = sqrt(inside_square_rooted_numbers);
    two_a = 2 * a;
    first_solution = (negative_b - square_rooted_number) / two_a;
    second_solution = (negative_b + square_rooted_number) / two_a;

    cout << "x = " << first_solution << " and " << "x = " << second_solution;


    return 0;
}
