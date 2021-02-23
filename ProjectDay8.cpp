#include <iostream>
using namespace std;

template<typename T>
void print(T x) 
{
    cout << x << '\n';
}

int main()
{
    int x;
    cout << "Enter a number\n";
    cin >> x;

    if (x < 0)
    {
        x = 1;
    }


    cout << "Oh It might destory your computer\n";
    for (int i = 0; i <= x; ++i)
        print<int>(i);

    cout << "Wow your computer toughed it out nice\n";

    cout << "Your reward is a cookie";

    print("bye bye");

}

