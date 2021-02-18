#include <iostream>
#include <vector>
#include <string>
#include <limits>

using std::cout;
using std::cin;
using std::string;


int main()
{
    std::vector<string> shopping_list = {};
    unsigned int number_of_items_to_add;
    unsigned int num_of_items_checker = 1;
    string get_item;


    cout << "How many things do you want to add? ";
    cin >> number_of_items_to_add;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << '\n';


    for (int i = 0; i < number_of_items_to_add; i++)
    {
        cout << "What do you want to add\n";
        getline(cin, get_item);
        shopping_list.push_back(get_item);

    }

    
    for (int i = 0; i < shopping_list.size(); i++)
    {
        cout << num_of_items_checker << " " << shopping_list[i] << '\n';
        num_of_items_checker++;
    }

}
