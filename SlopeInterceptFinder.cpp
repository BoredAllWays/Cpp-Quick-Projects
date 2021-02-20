#include <iostream>
#include <vector>
int main()
{
    long double x_1, y_1, x_2, y_2;
    
    std::cout << "what is the first coordinate?\n";
    std::cin >> x_1;
    std::cout << "what is the second coordinate?\n";
    std::cin >> y_1;
    std::cout << "what is the third coordinate?\n";
    std::cin >> x_2;
    std::cout << "what is the fourth coordinate?\n";
    std::cin >> y_2;

    //slope (y2-y1) / (x2-x1)
    //find b = y_1 = slope(x_1) add or subtract
    
    long double slope = (y_2 - y_1) / (x_2 - x_1);

    long double find_right_side = (slope * x_1);

    long double b = 0;
    if (find_right_side < 0)
    {
        b = (y_1 + find_right_side);
    }
    else
    {
        b = (y_1 - find_right_side);
    }


    std::cout << "y = " << slope << "x " << " + " << b;



}
